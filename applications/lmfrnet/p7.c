// MMCBlock2_layer3

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock2_mmLayer3_branch11_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer3_branch33a_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer3_branch33b_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer3_branch33c_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer3_branch11_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer3_branch33a_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer3_branch33b_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer3_branch33c_conv_0_bias.h"

int main()
{
    puts("[p7] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_2_HEIGHT*STAGE_2_WIDTH*(STAGE_2_CHANNELS + 2*24)] = {0};
    type out[STAGE_2_HEIGHT*STAGE_2_WIDTH*(STAGE_2_CHANNELS + 3*24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p7] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_2_HEIGHT, 
        STAGE_2_WIDTH, 
        STAGE_2_CHANNELS + 2*24,
        MMCBlock2_mmLayer3_branch11_conv_0_weight,
        MMCBlock2_mmLayer3_branch33a_conv_0_weight,
        MMCBlock2_mmLayer3_branch33b_conv_0_weight,
        MMCBlock2_mmLayer3_branch33c_conv_0_weight,
        MMCBlock2_mmLayer3_branch11_conv_0_bias,
        MMCBlock2_mmLayer3_branch33a_conv_0_bias,
        MMCBlock2_mmLayer3_branch33b_conv_0_bias,
        MMCBlock2_mmLayer3_branch33c_conv_0_bias,
        x,
        out,
        p6,
        p7,
        p8
    );
    
    time_finish = memphis_get_tick();
    printf("[p7] finished MFBlock %u\n", time_finish);
    printf("[p7] time lapsed %u\n", time_finish-time_start);

    puts("[p7] finishing application");

    puts("[p7] printing data");

    return 0;
}