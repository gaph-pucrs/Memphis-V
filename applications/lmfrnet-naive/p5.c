// mfblock4

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_5
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p5] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_pool1[16*16*104] = {0};
    static type out_mf4[16*16*128] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_pool1, sizeof(out_pool1), p4);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock2_mmLayer1_shapes, &MMCBlock2_mmLayer1_params, out_pool1, out_mf4);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf4, sizeof(out_mf4), p6);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p5] finishing application");

    puts("[p5] compute:");
    PRINT_STATS(data);

    puts("[p5] comm:");
    PRINT_STATS(comm);

    return 0;
}
