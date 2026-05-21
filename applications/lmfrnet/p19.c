// MMCBlock4_layer3 + tran + global pool

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock4_mmLayer3_branch11_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch33a_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch33b_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch33c_conv_0_weight.h"
#include "./params/tran_ConvNormRelu4_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer3_branch11_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer3_branch33a_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer3_branch33b_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer3_branch33c_conv_0_bias.h"
#include "./params/tran_ConvNormRelu4_conv_0_bias.h"


int main()
{
    puts("[p19] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_4_HEIGHT*STAGE_4_WIDTH*(STAGE_4_CHANNELS + 2*24)] = {0};
    type out[STAGE_5_CHANNELS] = {0};
    
    time_start = memphis_get_tick();
    printf("[p19] starting MFBlock %u\n", time_start);

    MFBlock_gap (
        STAGE_4_HEIGHT, 
        STAGE_4_WIDTH, 
        STAGE_4_CHANNELS + 2*24,
        MMCBlock4_mmLayer3_branch11_conv_0_weight,
        MMCBlock4_mmLayer3_branch33a_conv_0_weight,
        MMCBlock4_mmLayer3_branch33b_conv_0_weight,
        MMCBlock4_mmLayer3_branch33c_conv_0_weight,
        tran_ConvNormRelu4_conv_0_weight,
        MMCBlock4_mmLayer3_branch11_conv_0_bias,
        MMCBlock4_mmLayer3_branch33a_conv_0_bias,
        MMCBlock4_mmLayer3_branch33b_conv_0_bias,
        MMCBlock4_mmLayer3_branch33c_conv_0_bias,
        tran_ConvNormRelu4_conv_0_bias,
        x,
        out,
        p18,
        p19,
        p20
    );
    
    time_finish = memphis_get_tick();
    printf("[p19] finished MFBlock %u\n", time_finish);
    printf("[p19] time lapsed %u\n", time_finish-time_start);

    puts("[p19] finishing application");

    return 0;
}