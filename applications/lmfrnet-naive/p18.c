// mfblock17

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_18
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p18] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_pool3[4*4*392] = {0};
    static type out_mf17[4*4*440] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_pool3, sizeof(out_pool3), p17);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer2_shapes, &MMCBlock4_mmLayer2_params, out_pool3, out_mf17);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf17, sizeof(out_mf17), p19);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p18] finishing application");

    puts("[p18] compute:");
    PRINT_STATS(data);

    puts("[p18] comm:");
    PRINT_STATS(comm);

    return 0;
}
