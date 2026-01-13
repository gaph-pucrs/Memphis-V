#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = -6.78149120e+01;
            break;
        case 1:
            prod_weight = 1.04277926e+00;
            break;
        case 2:
            prod_weight = 1.17123972e-01;
            break;
        case 3:
            prod_weight = -6.52366764e-01;
            break;
        case 4:
            prod_weight = -5.56500907e-01;
            break;
        case 5:
            prod_weight = 6.78638765e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 1:
            cons_weight = -1.77036922e+01;
            break;
        case 2:
            cons_weight = 1.23622322e+01;
            break;
        case 3:
            cons_weight = -7.98877974e+00;
            break;
        case 4:
            cons_weight = 1.33792041e+01;
            break;
        case 5:
            cons_weight = -4.89644347e-02;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 121.61150962 + 2.05319126e-04 * rel_time + 1.07723211e+01 * hops + 5.87573216e+00 * size + prod_weight + cons_weight;
}
