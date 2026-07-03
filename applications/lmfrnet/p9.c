// MMCBlock2_layer4 + tran + pool (backbone half; tran_conv+pool now runs on p10)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock2_mmLayer4_branch11_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch33a_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch33b_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch33c_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch11_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer4_branch33a_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer4_branch33b_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer4_branch33c_conv_0_bias.h"

int main()
{
    puts("[p9] starting application");

    type x[STAGE_2_HEIGHT*STAGE_2_WIDTH*(STAGE_2_CHANNELS + 3*24)] = {0};

    MFBlock_backbone (
        STAGE_2_HEIGHT,
        STAGE_2_WIDTH,
        STAGE_2_CHANNELS + 3*24,
        MMCBlock2_mmLayer4_branch11_conv_0_weight,
        MMCBlock2_mmLayer4_branch33a_conv_0_weight,
        MMCBlock2_mmLayer4_branch33b_conv_0_weight,
        MMCBlock2_mmLayer4_branch33c_conv_0_weight,
        MMCBlock2_mmLayer4_branch11_conv_0_bias,
        MMCBlock2_mmLayer4_branch33a_conv_0_bias,
        MMCBlock2_mmLayer4_branch33b_conv_0_bias,
        MMCBlock2_mmLayer4_branch33c_conv_0_bias,
        x,
        p8,
        p9,
        p10
    );

    puts("[p9] finishing application");

    return 0;
}
