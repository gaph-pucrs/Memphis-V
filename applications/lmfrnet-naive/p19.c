// mfblock18 + tran_conv4 + gap

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_19
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p19] starting application");

    static time data[NUM_INFERENCES][2] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_mf17[4*4*440] = {0};
    static type out_mf18[4*4*464] = {0};
    static type out_tran4[4*4*464] = {0};
    static type out_gap[464] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_mf17, sizeof(out_mf17), p18);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer3_shapes, &MMCBlock4_mmLayer3_params, out_mf17, out_mf18);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        zero_fill(4*4*464, out_tran4);

        data[i][1].to = memphis_get_tick();
            tran_conv(&tran_ConvNormRelu4_shape, &tran_ConvNormRelu4_params, out_mf18, out_tran4);
            gap(&gap_shape, out_tran4, out_gap);
        data[i][1].tf = memphis_get_tick();
        data[i][1].lapsed = data[i][1].tf - data[i][1].to;

        comm[i][0].to = memphis_get_tick();
            memphis_send(out_gap, sizeof(out_gap), p20);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed += comm[i][0].tf - comm[i][0].to;
    }

    puts("[p19] finishing application");

    puts("[p19] compute:");
    PRINT_STATS(data);

    puts("[p19] comm:");
    PRINT_STATS(comm);

    return 0;
}
