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

    static type out_mf15[8*8*392] = {0};
    static type out_mf16[4*4*416] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf15, sizeof(out_mf15), p16);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer1_shapes, &MMCBlock4_mmLayer1_params, out_mf15, out_mf16);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf16, sizeof(out_mf16), p18);
    }

    puts("[p17] finishing application");

    PRINT_STATS(data);

    return 0;
}
