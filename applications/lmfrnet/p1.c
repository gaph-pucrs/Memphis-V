// stemBlock + mfblock1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <memphis.h>

#if VECTOR_1
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

#define DUMP_ATEXIT(label)                                        \
    do {                                                          \
        printf("[p1] --- atexit dump: %s ---\n", label);          \
        unsigned *_p = (unsigned*)__atexit;                       \
        for (int _i = 0; _i < 35; _i++)                           \
            printf("[p1] atexit[%d]=%x\n", _i, _p[_i]);           \
    } while (0)

int main()
{
    /* Silent snapshot BEFORE any stdio call (no printf/puts here yet,
     * so this can't trigger stdio's own lazy init as a side effect). */
    static unsigned atexit_pre_puts[35];
    for (int _i = 0; _i < 35; _i++)
        atexit_pre_puts[_i] = ((unsigned*)__atexit)[_i];

    puts("[p1] starting application");

    printf("[p1] --- atexit dump: absolute start (pre-puts, captured silently) ---\n");
    for (int _i = 0; _i < 35; _i++)
        printf("[p1] atexit[%d]=%x\n", _i, atexit_pre_puts[_i]);

    static time data[2] = {0};

    static type out_stemBlock[32*32*32] = {0};
    static type out_mf1[32*32*56] = {0};

    DUMP_ATEXIT("before stemBlock");

    data[0].to = memphis_get_tick();
        stemBlock(&stemBlock_shape, &stemBlock_params, image1, out_stemBlock);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    DUMP_ATEXIT("after stemBlock");

    data[1].to = memphis_get_tick();
        MFBlock(&MMCBlock1_mmLayer1_shapes, &MMCBlock1_mmLayer1_params, out_stemBlock, out_mf1);
    data[1].tf = memphis_get_tick();
    data[1].lapsed = data[1].tf - data[1].to;

    DUMP_ATEXIT("after MFBlock");

    memphis_send(out_mf1, sizeof(out_mf1), p2);

    DUMP_ATEXIT("after memphis_send");

    puts("[p1] finishing application");

    PRINT_STATS(data);

    // printf("[p1] __atexit ptr = %p\n", (void*)__atexit);
    // if (__atexit) {
    //     unsigned *p = (unsigned*)__atexit;
    //     for (int i = 0; i < 40; i++)
    //         printf("[p1] __atexit[%d] (off %d) = %x\n", i, i*4, p[i]);
    // }

    return 0;
    // _exit(0);
}