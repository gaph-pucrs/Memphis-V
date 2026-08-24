// mfblock6

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_7
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p7] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_mf5[16*16*152] = {0};
    static type out_mf6[16*16*176] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_mf5, sizeof(out_mf5), p6);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock2_mmLayer3_shapes, &MMCBlock2_mmLayer3_params, out_mf5, out_mf6);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf6, sizeof(out_mf6), p8);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p7] finishing application");

    puts("[p7] compute:");
    PRINT_STATS(data);

    puts("[p7] comm:");
    PRINT_STATS(comm);

    return 0;
}
