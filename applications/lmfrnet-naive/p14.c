// mfblock13

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_14
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p14] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf12[8*8*320] = {0};
    static type out_mf13[8*8*344] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf12, sizeof(out_mf12), p13);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer6_shapes, &MMCBlock3_mmLayer6_params, out_mf12, out_mf13);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf13, sizeof(out_mf13), p15);
    }

    puts("[p14] finishing application");

    PRINT_STATS(data);

    return 0;
}
