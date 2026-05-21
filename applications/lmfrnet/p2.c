// MMCBlock1_layer1

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock1_mmLayer1_branch11_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer1_branch33a_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer1_branch33b_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer1_branch33c_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer1_branch11_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer1_branch33a_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer1_branch33b_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer1_branch33c_conv_0_bias.h"

int main()
{
    puts("[p2] starting application");

    unsigned time_start;
    unsigned time_finish;
     
    type x[STAGE_1_HEIGHT*STAGE_1_WIDTH*STAGE_1_CHANNELS] = {0};
    type out[STAGE_1_HEIGHT*STAGE_1_WIDTH*(STAGE_1_CHANNELS + 24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p2] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_1_HEIGHT, 
        STAGE_1_WIDTH, 
        STAGE_1_CHANNELS,
        MMCBlock1_mmLayer1_branch11_conv_0_weight,
        MMCBlock1_mmLayer1_branch33a_conv_0_weight,
        MMCBlock1_mmLayer1_branch33b_conv_0_weight,
        MMCBlock1_mmLayer1_branch33c_conv_0_weight,
        MMCBlock1_mmLayer1_branch11_conv_0_bias,
        MMCBlock1_mmLayer1_branch33a_conv_0_bias,
        MMCBlock1_mmLayer1_branch33b_conv_0_bias,
        MMCBlock1_mmLayer1_branch33c_conv_0_bias,
        x,
        out,
        p1,
        p2,
        p3
    );
    
    time_finish = memphis_get_tick();
    printf("[p2] finished MFBlock %u\n", time_finish);
    printf("[p2] time lapsed %u\n", time_finish-time_start);

    puts("[p2] finishing application");

    return 0;
}