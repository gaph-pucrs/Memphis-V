// tran_conv + global-average-pool tail for p22's MFBlock_gap (vector PE)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"

#define VECTOR
#include "cnn_common.h"

#include "./params/tran_ConvNormRelu4_conv_0_weight.h"
#include "./params/tran_ConvNormRelu4_conv_0_bias.h"

int main()
{
    puts("[p23] starting application");

    type out[STAGE_5_CHANNELS] = {0};

    MFBlock_gap_tail (
        STAGE_4_HEIGHT,
        STAGE_4_WIDTH,
        STAGE_5_CHANNELS,
        tran_ConvNormRelu4_conv_0_weight,
        tran_ConvNormRelu4_conv_0_bias,
        out,
        p22,
        p23,
        p24
    );

    puts("[p23] finishing application");

    return 0;
}
