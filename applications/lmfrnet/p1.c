// stemBlock

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "./dataset/image1.h"

#include "./params/stemBlock_stemConv_0_0_weight.h"
#include "./params/stemBlock_stemConv_0_0_bias.h"

int main()
{
    puts("[p1] starting application");

    unsigned time_start;
    unsigned time_finish;

    type out[STAGE_1_HEIGHT*STAGE_1_WIDTH*STAGE_1_CHANNELS] = {0};
    
    time_start = memphis_get_tick();
    printf("[p1] starting stemBlock %u\n", time_start);

    stemBlock (
        IMAGE_HEIGHT,
        IMAGE_WIDTH,
        IMAGE_CHANNELS,
        image1,
        stemBlock_stemConv_0_0_weight,
        stemBlock_stemConv_0_0_bias,
        STAGE_1_HEIGHT,
        STAGE_1_WIDTH,
        STAGE_1_CHANNELS,
        out,
        3,
        1,
        p1,
        p2
    );
    
    time_finish = memphis_get_tick();
    printf("[p1] finished stemBlock %u\n", time_finish);
    printf("[p1] time lapsed %u\n", time_finish-time_start);

    puts("[p1] finishing application");

    return 0;
}