// tran_conv + pool tail for p18's MFBlock_tran (vector PE)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"

#define VECTOR
#include "cnn_common.h"

#include "./params/tran_ConvNormRelu3_conv_0_weight.h"
#include "./params/tran_ConvNormRelu3_conv_0_bias.h"

int main()
{
    puts("[p19] starting application");

    type out[STAGE_4_HEIGHT*STAGE_4_WIDTH*STAGE_4_CHANNELS] = {0};

    MFBlock_tran_tail (
        STAGE_3_HEIGHT,
        STAGE_3_WIDTH,
        STAGE_4_CHANNELS,
        tran_ConvNormRelu3_conv_0_weight,
        tran_ConvNormRelu3_conv_0_bias,
        out,
        p18,
        p19,
        p20
    );

    puts("[p19] finishing application");

    return 0;
}
