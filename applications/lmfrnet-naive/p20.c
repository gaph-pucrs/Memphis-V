// fc

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_20
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p20] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_gap[464] = {0};
    static type out_fc[10] = {0};

    unsigned prev_tick = memphis_get_tick();

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_gap, sizeof(out_gap), p19);

        zero_fill(10, out_fc);

        data[i][0].to = memphis_get_tick();
            fc(&fc_shape, &fc_params, out_gap, out_fc);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        type argmax = out_fc[0];
        int class = 0;
        for (int n = 0; n < 10; n++)
        {
            if (argmax < out_fc[n])
            {
                argmax = out_fc[n];
                class = n;
            }
        }

        printf("[%d] predicted class: %d (val = %d)\n", i+1, class, argmax);

        unsigned now_tick = memphis_get_tick();
        printf("[%d] THROUGHPUT: %u\n", i+1, now_tick - prev_tick);
        prev_tick = now_tick;
    }

    puts("[p20] finishing application");

    PRINT_STATS(data);

    return 0;
}
