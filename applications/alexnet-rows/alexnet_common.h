#ifndef __ALEXNET_COMMON_H__
#define __ALEXNET_COMMON_H__

#include <stdio.h>

#include "cnn_common.h"

//{{{
KERNEL
void conv_partial (
    const TensorShape *restrict shape,  // C_in = this PE's input channels only
    const ConvParams *restrict params,  // w = this PE's slice, [C_out][C_in][K][K]
    const type in_pd[],                 // this PE's input channels, padded, [C_in][H_in+2p][W_in+2p]
    type out[],                         // partial sum of output channel oc, [H_out][W_out]
    const int oc
) {
    // partial sum of one output channel over this PE's input channels (the local sum): the
    // join adds every PE's partial of channel oc, then shifts, adds the bias and applies the relu
    zero (shape->H_out*shape->W_out, out);

    for (int ic = 0; ic < shape->C_in; ic++)
    {
        conv_channel (shape, params, in_pd, out, oc, ic);
    }
}
//}}}

#endif
