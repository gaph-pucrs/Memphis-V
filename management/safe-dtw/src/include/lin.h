#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = -6.63057650e+01;
            break;
        case 1:
            prod_weight = -1.98704341e-01;
            break;
        case 2:
            prod_weight = 7.94719905e-01;
            break;
        case 3:
            prod_weight = -2.98269973e-01;
            break;
        case 4:
            prod_weight = -3.49331386e-01;
            break;
        case 5:
            prod_weight = 6.63573508e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 1:
            cons_weight = -1.74368763e+01;
            break;
        case 2:
            cons_weight = 1.26990320e+01;
            break;
        case 3:
            cons_weight = -7.81395932e+00;
            break;
        case 4:
            cons_weight = 1.26033894e+01;
            break;
        case 5:
            cons_weight = -5.15857941e-02;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 119.82932591 + 2.59115304e-04 * rel_time + 7.05518144e+00 * hops + 6.19029529e+00 * size + prod_weight + cons_weight;
}
