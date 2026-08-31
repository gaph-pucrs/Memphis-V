// mfblock16

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_17
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p17] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_pool3[4*4*392] = {0};
    static type out_mf16[4*4*416] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_pool3, sizeof(out_pool3), p16);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer1_shapes, &MMCBlock4_mmLayer1_params, out_pool3, out_mf16);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf16, sizeof(out_mf16), p18);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p17] finishing application");

    puts("[p17] compute:");
    PRINT_STATS(data);

    puts("[p17] comm:");
    PRINT_STATS(comm);

    return 0;
}
