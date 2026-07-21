#ifndef __DEBUG_FUNCS_H__
#define __DEBUG_FUNCS_H__

typedef struct {
    unsigned to;
    unsigned tf;
    unsigned lapsed;
} time;

#define PRINT_STATS(arr)                                          \
    do {                                                          \
        printf("--- STATS ---\n");                                \
        size_t _len = sizeof(arr) / sizeof((arr)[0]);             \
        for (size_t _i = 0; _i < _len; ++_i) {                    \
            printf("%u\n", (arr)[_i].lapsed);                     \
        }                                                         \
    } while (0)

#endif
