// classifier

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "cnn_std.h"

#define VECTOR
#include "cnn_common.h"

#include "./params/classifier_weight.h"
#include "./params/classifier_bias.h"

int main()
{
    puts("[p24] starting application");

    unsigned time_start;
    unsigned time_finish;
    
    type x[STAGE_5_CHANNELS] = {0};
    type out[STAGE_6_CLASSES] = {0};
    
    time_start = memphis_get_tick();
    printf("[p24] starting fully-connected layer %u\n", time_start);

    fc (
        STAGE_5_CHANNELS,
        x,
        classifier_weight,
        classifier_bias,
        STAGE_6_CLASSES,
        out,
        p23,
        p24
    );
    
    time_finish = memphis_get_tick();
    printf("[p24] finished fully-connected layer %u\n", time_finish);
    printf("[p24] time lapsed %u\n", time_finish-time_start);

    puts("[p24] classifing...");

    type argmax = out[0];
    int class = 0;
    for (int i = 0; i < STAGE_6_CLASSES; i++)
    {
        if (argmax < out[i])
        {
            argmax = out[i];
            class = i;
        }
    }

    time_finish = memphis_get_tick();

    printf("[p24] predicted class: %d (val = %d)\n", class, argmax);
    printf("[p24] time lapsed %u\n", time_finish-time_start);

    puts("[p24] finishing application");

    return 0;
}