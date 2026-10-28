#ifndef __DEBUG_FUNCS_H__
#define __DEBUG_FUNCS_H__

#include <stdint.h>

typedef struct {
    unsigned to;
    unsigned tf;
    unsigned lapsed;
    unsigned mul;       // retired scalar mul/mulh/mulhu/mulhsu
    unsigned vmac;      // retired vmacc/vnmsac/vmadd/vnmsub
} time;

// RS5's user-mode shadows of mhpmcounter22 (mul) and mhpmcounter27 (vmac), as read by
// RS5's alexnet-refactor. They count per core, so they include the other task on the PE
// and the kernel, if those run during the slot (needs HPMCOUNTEREnable in PhiversPE.sv).
static inline unsigned read_mul(void)
{
    unsigned v;
    __asm__ volatile("csrr %0, 0xC16" : "=r"(v));  // hpmcounter22
    return v;
}

static inline unsigned read_vmac(void)
{
    unsigned v;
    __asm__ volatile("csrr %0, 0xC1B" : "=r"(v));  // hpmcounter27
    return v;
}

// Runs CALL and adds the ticks, muls and vmacs it took to slot (a time entry, zero-initialized)
#define TIMED(slot, CALL)                                                   \
    do {                                                                    \
        unsigned _mul  = read_mul();                                        \
        unsigned _vmac = read_vmac();                                       \
        (slot).to = memphis_get_tick();                                     \
        CALL;                                                               \
        (slot).tf = memphis_get_tick();                                     \
        (slot).mul  += read_mul()  - _mul;                                  \
        (slot).vmac += read_vmac() - _vmac;                                 \
        (slot).lapsed += (slot).tf - (slot).to;                             \
    } while (0)

// buf must be an array: its sizeof is the message size
#define SEND(slot, buf, target)     TIMED(slot, memphis_send((buf), sizeof(buf), (target)))
#define RECEIVE(slot, buf, source)  TIMED(slot, memphis_receive((buf), sizeof(buf), (source)))

// arr must be time[NUM_INFERENCES][SLOTS]: one row of per-stage timing slots
// per inference, so throughput can be read off per image and in aggregate.
#define PRINT_STATS(arr)                                                    \
    do {                                                                    \
        printf("--- STATS ---\n");                                          \
        unsigned _n     = sizeof(arr) / sizeof((arr)[0]);                   \
        unsigned _slots = sizeof((arr)[0]) / sizeof((arr)[0][0]);           \
        unsigned _grand_tot = 0;                                            \
        for (unsigned _i = 0; _i < _n; ++_i) {                              \
            unsigned _tot = 0, _mul = 0, _vmac = 0;                         \
            for (unsigned _j = 0; _j < _slots; ++_j) {                      \
                printf("%u\n", (arr)[_i][_j].lapsed);                       \
                _tot  += (arr)[_i][_j].lapsed;                              \
                _mul  += (arr)[_i][_j].mul;                                 \
                _vmac += (arr)[_i][_j].vmac;                                \
            }                                                               \
            printf("INFERENCE %u TOTAL: %u\n", _i+1, _tot);                 \
            printf("INFERENCE %u MUL: %u VMAC: %u\n", _i+1, _mul, _vmac);   \
            _grand_tot += _tot;                                             \
        }                                                                   \
        printf("GRAND TOTAL: %u\n", _grand_tot);                            \
        printf("AVG PER INFERENCE: %u\n", _grand_tot / (unsigned)_n);       \
    } while (0)

// wrapping sum of a layer's outputs, the same checksum RS5's alexnet-refactor prints
static inline uint32_t checksum (const int n, const int buf[])
{
    uint32_t sum = 0;
    for (int i = 0; i < n; i++)
        sum += (uint32_t)buf[i];
    return sum;
}

#endif
