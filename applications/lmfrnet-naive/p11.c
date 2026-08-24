// mfblock10

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_11
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p11] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf9[8*8*248] = {0};
    static type out_mf10[8*8*272] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf9, sizeof(out_mf9), p10);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer3_shapes, &MMCBlock3_mmLayer3_params, out_mf9, out_mf10);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf10, sizeof(out_mf10), p12);
    }

    puts("[p11] finishing application");

    PRINT_STATS(data);

    return 0;
}
