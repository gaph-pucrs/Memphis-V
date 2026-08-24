// mfblock8

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_9
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p9] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_pool2[8*8*200] = {0};
    static type out_mf8[8*8*224] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_pool2, sizeof(out_pool2), p8);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer1_shapes, &MMCBlock3_mmLayer1_params, out_pool2, out_mf8);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf8, sizeof(out_mf8), p10);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p9] finishing application");

    puts("[p9] compute:");
    PRINT_STATS(data);

    puts("[p9] comm:");
    PRINT_STATS(comm);

    return 0;
}
