// MMCBlock4_layer3 + tran + global pool (backbone half; tran_conv+GAP now runs on p23)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock4_mmLayer3_branch11_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch33a_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch33b_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch33c_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch11_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer3_branch33a_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer3_branch33b_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer3_branch33c_conv_0_bias.h"


int main()
{
    puts("[p22] starting application");

    type x[STAGE_4_HEIGHT*STAGE_4_WIDTH*(STAGE_4_CHANNELS + 2*24)] = {0};

    MFBlock_backbone (
        STAGE_4_HEIGHT,
        STAGE_4_WIDTH,
        STAGE_4_CHANNELS + 2*24,
        MMCBlock4_mmLayer3_branch11_conv_0_weight,
        MMCBlock4_mmLayer3_branch33a_conv_0_weight,
        MMCBlock4_mmLayer3_branch33b_conv_0_weight,
        MMCBlock4_mmLayer3_branch33c_conv_0_weight,
        MMCBlock4_mmLayer3_branch11_conv_0_bias,
        MMCBlock4_mmLayer3_branch33a_conv_0_bias,
        MMCBlock4_mmLayer3_branch33b_conv_0_bias,
        MMCBlock4_mmLayer3_branch33c_conv_0_bias,
        x,
        p21,
        p22,
        p23
    );

    puts("[p22] finishing application");

    return 0;
}
