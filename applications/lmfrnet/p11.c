// MMCBlock3_layer3

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock3_mmLayer3_branch11_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer3_branch33a_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer3_branch33b_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer3_branch33c_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer3_branch11_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer3_branch33a_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer3_branch33b_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer3_branch33c_conv_0_bias.h"

int main()
{
    puts("[p11] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 2*24)] = {0};
    type out[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 3*24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p11] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_3_HEIGHT, 
        STAGE_3_WIDTH, 
        STAGE_3_CHANNELS + 2*24,
        MMCBlock3_mmLayer3_branch11_conv_0_weight,
        MMCBlock3_mmLayer3_branch33a_conv_0_weight,
        MMCBlock3_mmLayer3_branch33b_conv_0_weight,
        MMCBlock3_mmLayer3_branch33c_conv_0_weight,
        MMCBlock3_mmLayer3_branch11_conv_0_bias,
        MMCBlock3_mmLayer3_branch33a_conv_0_bias,
        MMCBlock3_mmLayer3_branch33b_conv_0_bias,
        MMCBlock3_mmLayer3_branch33c_conv_0_bias,
        x,
        out,
        p10,
        p11,
        p12
    );
    
    time_finish = memphis_get_tick();
    printf("[p11] finished MFBlock %u\n", time_finish);
    printf("[p11] time lapsed %u\n", time_finish-time_start);

    puts("[p11] finishing application");

    return 0;
}