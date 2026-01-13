#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 1.85652819e+01;
            break;
        case 1:
            prod_weight = 1.47467546e+01;
            break;
        case 2:
            prod_weight = 1.59606425e+01;
            break;
        case 3:
            prod_weight = 1.45618035e+01;
            break;
        case 4:
            prod_weight = 1.57425081e+01;
            break;
        case 5:
            prod_weight = -7.95769907e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -3.74301457e+01;
            break;
        case 1:
            cons_weight = -1.16634208e+01;
            break;
        case 2:
            cons_weight = -1.12640651e+01;
            break;
        case 3:
            cons_weight = -8.56684111e+00;
            break;
        case 4:
            cons_weight = -1.06525180e+01;
            break;
        case 6:
            cons_weight = 7.95769907e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 521.27128379 + 1.98468734e-03 * rel_time + 7.06433795e+00 * hops + 3.76702463e+00 * size + prod_weight + cons_weight;
}
