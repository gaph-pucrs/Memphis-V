#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 1.86627336e+01;
            break;
        case 1:
            prod_weight = 1.47978211e+01;
            break;
        case 2:
            prod_weight = 1.60040928e+01;
            break;
        case 3:
            prod_weight = 1.46560831e+01;
            break;
        case 4:
            prod_weight = 1.58341109e+01;
            break;
        case 5:
            prod_weight = -7.99548414e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -3.78379021e+01;
            break;
        case 1:
            cons_weight = -1.15052313e+01;
            break;
        case 2:
            cons_weight = -1.13444427e+01;
            break;
        case 3:
            cons_weight = -8.66224260e+00;
            break;
        case 4:
            cons_weight = -1.06050227e+01;
            break;
        case 6:
            cons_weight = 7.99548414e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 520.89699811 + 2.00342442e-03 * rel_time + 7.07203766e+00 * hops + 3.78134227e+00 * size + prod_weight + cons_weight;
}
