// MMCBlock2_layer4 + tran + pool

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./params/MMCBlock2_mmLayer4_branch11_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch33a_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch33b_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch33c_conv_0_weight.h"
#include "./params/tran_ConvNormRelu2_conv_0_weight.h"
#include "./params/MMCBlock2_mmLayer4_branch11_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer4_branch33a_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer4_branch33b_conv_0_bias.h"
#include "./params/MMCBlock2_mmLayer4_branch33c_conv_0_bias.h"
#include "./params/tran_ConvNormRelu2_conv_0_bias.h"

int main()
{
    puts("[p8] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_2_HEIGHT*STAGE_2_WIDTH*(STAGE_2_CHANNELS + 3*24)] = {0};
    type out[STAGE_3_HEIGHT*STAGE_3_WIDTH*STAGE_3_CHANNELS] = {0};
    
    time_start = memphis_get_tick();
    printf("[p8] starting MFBlock %u\n", time_start);

    MFBlock_tran (
        STAGE_2_HEIGHT, 
        STAGE_2_WIDTH, 
        STAGE_2_CHANNELS + 3*24,
        MMCBlock2_mmLayer4_branch11_conv_0_weight,
        MMCBlock2_mmLayer4_branch33a_conv_0_weight,
        MMCBlock2_mmLayer4_branch33b_conv_0_weight,
        MMCBlock2_mmLayer4_branch33c_conv_0_weight,
        tran_ConvNormRelu2_conv_0_weight,
        MMCBlock2_mmLayer4_branch11_conv_0_bias,
        MMCBlock2_mmLayer4_branch33a_conv_0_bias,
        MMCBlock2_mmLayer4_branch33b_conv_0_bias,
        MMCBlock2_mmLayer4_branch33c_conv_0_bias,
        tran_ConvNormRelu2_conv_0_bias,
        x,
        out,
        p7,
        p8,
        p9
    );
    
    time_finish = memphis_get_tick();
    printf("[p8] finished MFBlock %u\n", time_finish);
    printf("[p8] time lapsed %u\n", time_finish-time_start);

    puts("[p8] finishing application");

    return 0;
}