// tran_conv + pool tail for p9's MFBlock_tran (vector PE)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"

#define VECTOR
#include "cnn_common.h"

#include "./params/tran_ConvNormRelu2_conv_0_weight.h"
#include "./params/tran_ConvNormRelu2_conv_0_bias.h"

int main()
{
    puts("[p10] starting application");

    type out[STAGE_3_HEIGHT*STAGE_3_WIDTH*STAGE_3_CHANNELS] = {0};

    MFBlock_tran_tail (
        STAGE_2_HEIGHT,
        STAGE_2_WIDTH,
        STAGE_3_CHANNELS,
        tran_ConvNormRelu2_conv_0_weight,
        tran_ConvNormRelu2_conv_0_bias,
        out,
        p9,
        p10,
        p11
    );

    puts("[p10] finishing application");

    return 0;
}
