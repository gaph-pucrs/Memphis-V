// MMCBlock4_layer2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock4_mmLayer2_branch11_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer2_branch33a_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer2_branch33b_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer2_branch33c_conv_0_weight.h"
#include "./params/MMCBlock4_mmLayer2_branch11_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer2_branch33a_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer2_branch33b_conv_0_bias.h"
#include "./params/MMCBlock4_mmLayer2_branch33c_conv_0_bias.h"

int main()
{
    puts("[p18] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_4_HEIGHT*STAGE_4_WIDTH*(STAGE_4_CHANNELS + 24)] = {0};
    type out[STAGE_4_HEIGHT*STAGE_4_WIDTH*(STAGE_4_CHANNELS + 2*24)] = {0};
    
    time_start = memphis_get_tick();
    printf("[p18] starting MFBlock %u\n", time_start);

    MFBlock (
        STAGE_4_HEIGHT, 
        STAGE_4_WIDTH, 
        STAGE_4_CHANNELS + 24,
        MMCBlock4_mmLayer2_branch11_conv_0_weight,
        MMCBlock4_mmLayer2_branch33a_conv_0_weight,
        MMCBlock4_mmLayer2_branch33b_conv_0_weight,
        MMCBlock4_mmLayer2_branch33c_conv_0_weight,
        MMCBlock4_mmLayer2_branch11_conv_0_bias,
        MMCBlock4_mmLayer2_branch33a_conv_0_bias,
        MMCBlock4_mmLayer2_branch33b_conv_0_bias,
        MMCBlock4_mmLayer2_branch33c_conv_0_bias,
        x,
        out,
        p17,
        p18,
        p19
    );
    
    time_finish = memphis_get_tick();
    printf("[p18] finished MFBlock %u\n", time_finish);
    printf("[p18] time lapsed %u\n", time_finish-time_start);

    puts("[p18] finishing application");

    return 0;
}