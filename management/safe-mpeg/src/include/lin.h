#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 1.29798426e+01;
            break;
        case 1:
            prod_weight = -6.33168317e+00;
            break;
        case 2:
            prod_weight = -6.69224606e+00;
            break;
        case 4:
            prod_weight = 4.40866711e-02;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -6.33168317e+00;
            break;
        case 1:
            cons_weight = -6.69224606e+00;
            break;
        case 2:
            cons_weight = 4.40866711e-02;
            break;
        case 4:
            cons_weight = 1.29798426e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 495.46310552 + -2.28860036e-03 * rel_time + 6.90666925e+00 * hops + 2.82154695e+00 * size + prod_weight + cons_weight;
}
