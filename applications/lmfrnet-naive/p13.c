// mfblock12

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_13
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p13] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf11[8*8*296] = {0};
    static type out_mf12[8*8*320] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf11, sizeof(out_mf11), p12);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer5_shapes, &MMCBlock3_mmLayer5_params, out_mf11, out_mf12);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf12, sizeof(out_mf12), p14);
    }

    puts("[p13] finishing application");

    PRINT_STATS(data);

    return 0;
}
