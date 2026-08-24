// mfblock2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_3
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p3] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf1[32*32*56] = {0};
    static type out_mf2[32*32*80] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf1, sizeof(out_mf1), p2);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock1_mmLayer2_shapes, &MMCBlock1_mmLayer2_params, out_mf1, out_mf2);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf2, sizeof(out_mf2), p4);
    }

    puts("[p3] finishing application");

    PRINT_STATS(data);

    return 0;
}
