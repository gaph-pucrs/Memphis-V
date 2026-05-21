// MMCBlock3_layer2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock3_mmLayer2_branch11_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer2_branch33a_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer2_branch33b_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer2_branch33c_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer2_branch11_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer2_branch33a_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer2_branch33b_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer2_branch33c_conv_0_bias.h"

int main()
{
    puts("[p10] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 24)] = {0};
    type out[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 2*24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p10] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_3_HEIGHT, 
        STAGE_3_WIDTH, 
        STAGE_3_CHANNELS + 24,
        MMCBlock3_mmLayer2_branch11_conv_0_weight,
        MMCBlock3_mmLayer2_branch33a_conv_0_weight,
        MMCBlock3_mmLayer2_branch33b_conv_0_weight,
        MMCBlock3_mmLayer2_branch33c_conv_0_weight,
        MMCBlock3_mmLayer2_branch11_conv_0_bias,
        MMCBlock3_mmLayer2_branch33a_conv_0_bias,
        MMCBlock3_mmLayer2_branch33b_conv_0_bias,
        MMCBlock3_mmLayer2_branch33c_conv_0_bias,
        x,
        out,
        p9,
        p10,
        p11
    );
    
    time_finish = memphis_get_tick();
    printf("[p10] finished MFBlock %u\n", time_finish);
    printf("[p10] time lapsed %u\n", time_finish-time_start);

    puts("[p10] finishing application");

    return 0;
}