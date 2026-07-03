// tran_conv + pool tail for p4's MFBlock_tran (vector PE)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"

#define VECTOR
#include "cnn_common.h"

#include "./params/tran_ConvNormRelu1_conv_0_weight.h"
#include "./params/tran_ConvNormRelu1_conv_0_bias.h"

int main()
{
    puts("[p5] starting application");

    type out[STAGE_2_HEIGHT*STAGE_2_WIDTH*STAGE_2_CHANNELS] = {0};

    MFBlock_tran_tail (
        STAGE_1_HEIGHT,
        STAGE_1_WIDTH,
        STAGE_2_CHANNELS,
        tran_ConvNormRelu1_conv_0_weight,
        tran_ConvNormRelu1_conv_0_bias,
        out,
        p4,
        p5,
        p6
    );

    puts("[p5] finishing application");

    return 0;
}
