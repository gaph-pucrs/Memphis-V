// mfblock1

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_2
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p2] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_stemBlock[32*32*32] = {0};
    static type out_mf1[32*32*56] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_stemBlock, sizeof(out_stemBlock), p1);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock1_mmLayer1_shapes, &MMCBlock1_mmLayer1_params, out_stemBlock, out_mf1);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf1, sizeof(out_mf1), p3);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p2] finishing application");

    puts("[p2] compute:");
    PRINT_STATS(data);

    puts("[p2] comm:");
    PRINT_STATS(comm);

    return 0;
}
