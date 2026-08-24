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

    static type out_stemBlock[32*32*32] = {0};
    static type out_mf1[32*32*56] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_stemBlock, sizeof(out_stemBlock), p1);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock1_mmLayer1_shapes, &MMCBlock1_mmLayer1_params, out_stemBlock, out_mf1);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf1, sizeof(out_mf1), p3);
    }

    puts("[p2] finishing application");

    PRINT_STATS(data);

    return 0;
}
