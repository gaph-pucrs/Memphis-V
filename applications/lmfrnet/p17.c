// MMCBlock4_layer1

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock4_mmLayer1_branch11_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer1_branch33a_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer1_branch33b_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer1_branch33c_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer1_branch11_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer1_branch33a_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer1_branch33b_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer1_branch33c_conv_0_bias.h"

int main()
{
    puts("[p17] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_4_HEIGHT*STAGE_4_WIDTH*STAGE_4_CHANNELS] = {0};
    type out[STAGE_4_HEIGHT*STAGE_4_WIDTH*(STAGE_4_CHANNELS + 24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p17] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_4_HEIGHT, 
        STAGE_4_WIDTH, 
        STAGE_4_CHANNELS,
        MMCBlock4_mmLayer1_branch11_conv_0_weight,
        MMCBlock4_mmLayer1_branch33a_conv_0_weight,
        MMCBlock4_mmLayer1_branch33b_conv_0_weight,
        MMCBlock4_mmLayer1_branch33c_conv_0_weight,
        MMCBlock4_mmLayer1_branch11_conv_0_bias,
        MMCBlock4_mmLayer1_branch33a_conv_0_bias,
        MMCBlock4_mmLayer1_branch33b_conv_0_bias,
        MMCBlock4_mmLayer1_branch33c_conv_0_bias,
        x,
        out,
        p16,
        p18
    );
    
    time_finish = memphis_get_tick();
    printf("[p17] finished MFBlock %u\n", time_finish);
    printf("[p17] time lapsed %u\n", time_finish-time_start);

    puts("[p17] finishing application");

    return 0;
}