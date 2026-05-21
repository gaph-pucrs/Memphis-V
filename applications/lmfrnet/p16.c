// MMCBlock3_layer8 + tran + pool

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock3_mmLayer8_branch11_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch33a_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch33b_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch33c_conv_0_weight.h"
#include "./params/tran_ConvNormRelu3_conv_0_weight.h"
#include "./params/MMCBlock3_mmLayer8_branch11_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer8_branch33a_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer8_branch33b_conv_0_bias.h"
#include "./params/MMCBlock3_mmLayer8_branch33c_conv_0_bias.h"
#include "./params/tran_ConvNormRelu3_conv_0_bias.h"


int main()
{
    puts("[p16] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_3_HEIGHT*STAGE_3_WIDTH*(STAGE_3_CHANNELS + 7*24)] = {0};
    type out[STAGE_4_HEIGHT*STAGE_4_WIDTH*STAGE_4_CHANNELS] = {0};
    
    time_start = memphis_get_tick();
    printf("[p16] starting MFBlock %u\n", time_start);

    MFBlock_tran (
        STAGE_3_HEIGHT, 
        STAGE_3_WIDTH, 
        STAGE_3_CHANNELS + 7*24,
        MMCBlock3_mmLayer8_branch11_conv_0_weight,
        MMCBlock3_mmLayer8_branch33a_conv_0_weight,
        MMCBlock3_mmLayer8_branch33b_conv_0_weight,
        MMCBlock3_mmLayer8_branch33c_conv_0_weight,
        tran_ConvNormRelu3_conv_0_weight,
        MMCBlock3_mmLayer8_branch11_conv_0_bias,
        MMCBlock3_mmLayer8_branch33a_conv_0_bias,
        MMCBlock3_mmLayer8_branch33b_conv_0_bias,
        MMCBlock3_mmLayer8_branch33c_conv_0_bias,
        tran_ConvNormRelu3_conv_0_bias,
        x,
        out,
        p15,
        p16,
        p17
    );
    
    time_finish = memphis_get_tick();
    printf("[p16] finished MFBlock %u\n", time_finish);
    printf("[p16] time lapsed %u\n", time_finish-time_start);

    puts("[p16] finishing application");

    return 0;
}