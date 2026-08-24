// mfblock5

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_6
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p6] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf4[16*16*128] = {0};
    static type out_mf5[16*16*152] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf4, sizeof(out_mf4), p5);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock2_mmLayer2_shapes, &MMCBlock2_mmLayer2_params, out_mf4, out_mf5);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_mf5, sizeof(out_mf5), p7);
    }

    puts("[p6] finishing application");

    PRINT_STATS(data);

    return 0;
}
