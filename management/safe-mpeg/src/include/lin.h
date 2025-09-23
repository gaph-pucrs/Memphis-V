#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 1.27959410e+01;
            break;
        case 1:
            prod_weight = -6.30393125e+00;
            break;
        case 2:
            prod_weight = -6.53624505e+00;
            break;
        case 4:
            prod_weight = 4.42352495e-02;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -6.30393125e+00;
            break;
        case 1:
            cons_weight = -6.53624505e+00;
            break;
        case 2:
            cons_weight = 4.42352495e-02;
            break;
        case 4:
            cons_weight = 1.27959410e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 494.89278206 + -2.24913591e-03 * rel_time + 7.22633677e+00 * hops + 2.83105597e+00 * size + prod_weight + cons_weight;
}
