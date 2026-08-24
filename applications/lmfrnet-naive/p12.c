// mfblock11

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_12
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p12] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_mf10[8*8*272] = {0};
    static type out_mf11[8*8*296] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_mf10, sizeof(out_mf10), p11);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer4_shapes, &MMCBlock3_mmLayer4_params, out_mf10, out_mf11);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf11, sizeof(out_mf11), p13);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p12] finishing application");

    puts("[p12] compute:");
    PRINT_STATS(data);

    puts("[p12] comm:");
    PRINT_STATS(comm);

    return 0;
}
