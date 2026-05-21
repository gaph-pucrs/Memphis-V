// MMCBlock3_layer1

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock3_mmLayer1_branch11_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer1_branch33a_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer1_branch33b_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer1_branch33c_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer1_branch11_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer1_branch33a_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer1_branch33b_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer1_branch33c_conv_0_bias.h"

int main()
{
    puts("[p9] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_3_HEIGHT*STAGE_3_WIDTH*STAGE_3_CHANNELS] = {0};
    type out[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p9] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_3_HEIGHT, 
        STAGE_3_WIDTH, 
        STAGE_3_CHANNELS,
        MMCBlock3_mmLayer1_branch11_conv_0_weight,
        MMCBlock3_mmLayer1_branch33a_conv_0_weight,
        MMCBlock3_mmLayer1_branch33b_conv_0_weight,
        MMCBlock3_mmLayer1_branch33c_conv_0_weight,
        MMCBlock3_mmLayer1_branch11_conv_0_bias,
        MMCBlock3_mmLayer1_branch33a_conv_0_bias,
        MMCBlock3_mmLayer1_branch33b_conv_0_bias,
        MMCBlock3_mmLayer1_branch33c_conv_0_bias,
        x,
        out,
        p8,
        p9,
        p10
    );
    
    time_finish = memphis_get_tick();
    printf("[p9] finished MFBlock %u\n", time_finish);
    printf("[p9] time lapsed %u\n", time_finish-time_start);

    puts("[p9] finishing application");

    return 0;
}