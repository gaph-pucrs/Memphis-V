// mfblock9

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_10
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p10] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_mf8[8*8*224] = {0};
    static type out_mf9[8*8*248] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_mf8, sizeof(out_mf8), p9);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer2_shapes, &MMCBlock3_mmLayer2_params, out_mf8, out_mf9);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_mf9, sizeof(out_mf9), p11);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p10] finishing application");

    puts("[p10] compute:");
    PRINT_STATS(data);

    puts("[p10] comm:");
    PRINT_STATS(comm);

    return 0;
}
