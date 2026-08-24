// mfblock14

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_15
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p15] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf13[8*8*344] = {0};
    static type out_mf14[8*8*368] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf13, sizeof(out_mf13), p14);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock3_mmLayer7_shapes, &MMCBlock3_mmLayer7_params, out_mf13, out_mf14);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf14, sizeof(out_mf14), p16);
    }

    puts("[p15] finishing application");

    PRINT_STATS(data);

    return 0;
}
