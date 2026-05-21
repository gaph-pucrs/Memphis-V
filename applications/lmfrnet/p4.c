// MMCBlock1_layer3 + tran + pool

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock1_mmLayer3_branch11_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch33a_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch33b_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch33c_conv_0_weight.h"
#include "./params/tran_ConvNormRelu1_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer3_branch11_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer3_branch33a_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer3_branch33b_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer3_branch33c_conv_0_bias.h"
#include "./params/tran_ConvNormRelu1_conv_0_bias.h"


int main()
{
    puts("[p4] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_1_HEIGHT*STAGE_1_WIDTH*(STAGE_1_CHANNELS + 2*24)] = {0};
    type out[STAGE_2_HEIGHT*STAGE_2_WIDTH*STAGE_2_CHANNELS] = {0};
    
    time_start = memphis_get_tick();
    printf("[p4] starting MFBlock %u\n", time_start);

    MFBlock_tran (
        STAGE_1_HEIGHT, 
        STAGE_1_WIDTH, 
        STAGE_1_CHANNELS + 2*24,
        MMCBlock1_mmLayer3_branch11_conv_0_weight,
        MMCBlock1_mmLayer3_branch33a_conv_0_weight,
        MMCBlock1_mmLayer3_branch33b_conv_0_weight,
        MMCBlock1_mmLayer3_branch33c_conv_0_weight,
        tran_ConvNormRelu1_conv_0_weight,
        MMCBlock1_mmLayer3_branch11_conv_0_bias,
        MMCBlock1_mmLayer3_branch33a_conv_0_bias,
        MMCBlock1_mmLayer3_branch33b_conv_0_bias,
        MMCBlock1_mmLayer3_branch33c_conv_0_bias,
        tran_ConvNormRelu1_conv_0_bias,
        x,
        out,
        p3,
        p5
    );
    
    time_finish = memphis_get_tick();
    printf("[p4] finished MFBlock %u\n", time_finish);
    printf("[p4] time lapsed %u\n", time_finish-time_start);

    puts("[p4] finishing application");

    return 0;
}