// stemBlock

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_1
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./images.h"
#include "./debug.h"

int main()
{
    puts("[p1] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_stemBlock[32*32*32] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        zero_fill(32*32*32, out_stemBlock);

        data[i][0].to = memphis_get_tick();
            stemBlock(&stemBlock_shape, &stemBlock_params, images[i], out_stemBlock);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_stemBlock, sizeof(out_stemBlock), p2);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;
    }

    puts("[p1] finishing application");

    puts("[p1] compute:");
    PRINT_STATS(data);

    puts("[p1] comm:");
    PRINT_STATS(comm);

    return 0;
}
