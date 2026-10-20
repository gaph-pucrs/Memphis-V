#ifndef __DEBUG_FUNCS_H__
#define __DEBUG_FUNCS_H__

typedef struct {
    unsigned to;
    unsigned tf;
    unsigned lapsed;
} time;

// Runs CALL and adds the ticks it took to slot (a time entry, zero-initialized)
#define TIMED(slot, CALL)                                                   \
    do {                                                                    \
        (slot).to = memphis_get_tick();                                     \
        CALL;                                                               \
        (slot).tf = memphis_get_tick();                                     \
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
            unsigned _tot = 0;                                              \
            for (unsigned _j = 0; _j < _slots; ++_j) {                      \
                printf("%u\n", (arr)[_i][_j].lapsed);                       \
                _tot += (arr)[_i][_j].lapsed;                               \
            }                                                               \
            printf("INFERENCE %u TOTAL: %u\n", _i+1, _tot);                 \
            _grand_tot += _tot;                                             \
        }                                                                   \
        printf("GRAND TOTAL: %u\n", _grand_tot);                            \
        printf("AVG PER INFERENCE: %u\n", _grand_tot / (unsigned)_n);       \
    } while (0)

#endif
