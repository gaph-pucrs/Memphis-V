#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 1.89861042e+01;
            break;
        case 1:
            prod_weight = 1.53127805e+01;
            break;
        case 2:
            prod_weight = 1.63937822e+01;
            break;
        case 3:
            prod_weight = 1.51210404e+01;
            break;
        case 4:
            prod_weight = 1.62267778e+01;
            break;
        case 5:
            prod_weight = -8.20404850e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -3.91566918e+01;
            break;
        case 1:
            cons_weight = -1.21947239e+01;
            break;
        case 2:
            cons_weight = -1.18923401e+01;
            break;
        case 3:
            cons_weight = -7.62503470e+00;
            break;
        case 4:
            cons_weight = -1.11716945e+01;
            break;
        case 6:
            cons_weight = 8.20404850e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 529.49615652 + 2.05571792e-03 * rel_time + 7.03770086e+00 * hops + 3.86048639e+00 * size + prod_weight + cons_weight;
}
