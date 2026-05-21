// MMCBlock1_layer2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock1_mmLayer2_branch11_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer2_branch33a_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer2_branch33b_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer2_branch33c_conv_0_weight.h"
#include "./params/MMCBlock1_mmLayer2_branch11_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer2_branch33a_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer2_branch33b_conv_0_bias.h"
#include "./params/MMCBlock1_mmLayer2_branch33c_conv_0_bias.h"

int main()
{
    puts("[p3] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_1_HEIGHT*STAGE_1_WIDTH*(STAGE_1_CHANNELS + 24)] = {0};
    type out[STAGE_1_HEIGHT*STAGE_1_WIDTH*(STAGE_1_CHANNELS + 2*24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p3] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_1_HEIGHT, 
        STAGE_1_WIDTH, 
        STAGE_1_CHANNELS + 24,
        MMCBlock1_mmLayer2_branch11_conv_0_weight,
        MMCBlock1_mmLayer2_branch33a_conv_0_weight,
        MMCBlock1_mmLayer2_branch33b_conv_0_weight,
        MMCBlock1_mmLayer2_branch33c_conv_0_weight,
        MMCBlock1_mmLayer2_branch11_conv_0_bias,
        MMCBlock1_mmLayer2_branch33a_conv_0_bias,
        MMCBlock1_mmLayer2_branch33b_conv_0_bias,
        MMCBlock1_mmLayer2_branch33c_conv_0_bias,
        x,
        out,
        p2,
        p3,
        p4
    );
    
    time_finish = memphis_get_tick();
    printf("[p3] finished MFBlock %u\n", time_finish);
    printf("[p3] time lapsed %u\n", time_finish-time_start);

    puts("[p3] finishing application");

    return 0;
}