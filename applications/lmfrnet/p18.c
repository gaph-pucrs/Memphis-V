// MMCBlock3_layer8 + tran + pool (backbone half; tran_conv+pool now runs on p19)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock3_mmLayer8_branch11_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch33a_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch33b_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch33c_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch11_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer8_branch33a_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer8_branch33b_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer8_branch33c_conv_0_bias.h"


int main()
{
    puts("[p18] starting application");

    type x[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 7*24)] = {0};

    MFBlock_backbone (
        STAGE_3_HEIGHT,
        STAGE_3_WIDTH,
        STAGE_3_CHANNELS + 7*24,
        MMCBlock3_mmLayer8_branch11_conv_0_weight,
        MMCBlock3_mmLayer8_branch33a_conv_0_weight,
        MMCBlock3_mmLayer8_branch33b_conv_0_weight,
        MMCBlock3_mmLayer8_branch33c_conv_0_weight,
        MMCBlock3_mmLayer8_branch11_conv_0_bias,
        MMCBlock3_mmLayer8_branch33a_conv_0_bias,
        MMCBlock3_mmLayer8_branch33b_conv_0_bias,
        MMCBlock3_mmLayer8_branch33c_conv_0_bias,
        x,
        p17,
        p18,
        p19
    );

    puts("[p18] finishing application");

    return 0;
}
