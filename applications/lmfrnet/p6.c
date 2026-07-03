// MMCBlock2_layer1

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock2_mmLayer1_branch11_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer1_branch33a_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer1_branch33b_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer1_branch33c_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer1_branch11_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer1_branch33a_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer1_branch33b_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer1_branch33c_conv_0_bias.h"

int main()
{
    puts("[p6] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_2_HEIGHT*STAGE_2_WIDTH*STAGE_2_CHANNELS] = {0};
    type out[STAGE_2_HEIGHT*STAGE_2_WIDTH*(STAGE_2_CHANNELS + 24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p6] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_2_HEIGHT, 
        STAGE_2_WIDTH, 
        STAGE_2_CHANNELS,
        MMCBlock2_mmLayer1_branch11_conv_0_weight,
        MMCBlock2_mmLayer1_branch33a_conv_0_weight,
        MMCBlock2_mmLayer1_branch33b_conv_0_weight,
        MMCBlock2_mmLayer1_branch33c_conv_0_weight,
        MMCBlock2_mmLayer1_branch11_conv_0_bias,
        MMCBlock2_mmLayer1_branch33a_conv_0_bias,
        MMCBlock2_mmLayer1_branch33b_conv_0_bias,
        MMCBlock2_mmLayer1_branch33c_conv_0_bias,
        x,
        out,
        p5,
        p6,
        p7
    );
    
    time_finish = memphis_get_tick();
    printf("[p6] finished MFBlock %u\n", time_finish);
    printf("[p6] time lapsed %u\n", time_finish-time_start);

    puts("[p6] finishing application");

    return 0;
}