// MMCBlock1_layer3 + tran + pool (backbone half; tran_conv+pool now runs on p5)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock1_mmLayer3_branch11_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch33a_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch33b_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch33c_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch11_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer3_branch33a_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer3_branch33b_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer3_branch33c_conv_0_bias.h"


int main()
{
    puts("[p4] starting application");

    type x[STAGE_1_HEIGHT*STAGE_1_WIDTH*(STAGE_1_CHANNELS + 2*24)] = {0};

    MFBlock_backbone (
        STAGE_1_HEIGHT,
        STAGE_1_WIDTH,
        STAGE_1_CHANNELS + 2*24,
        MMCBlock1_mmLayer3_branch11_conv_0_weight,
        MMCBlock1_mmLayer3_branch33a_conv_0_weight,
        MMCBlock1_mmLayer3_branch33b_conv_0_weight,
        MMCBlock1_mmLayer3_branch33c_conv_0_weight,
        MMCBlock1_mmLayer3_branch11_conv_0_bias,
        MMCBlock1_mmLayer3_branch33a_conv_0_bias,
        MMCBlock1_mmLayer3_branch33b_conv_0_bias,
        MMCBlock1_mmLayer3_branch33c_conv_0_bias,
        x,
        p3,
        p4,
        p5
    );

    puts("[p4] finishing application");

    return 0;
}
