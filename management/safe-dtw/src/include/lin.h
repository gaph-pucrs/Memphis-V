#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = -6.59481823e+01;
            break;
        case 1:
            prod_weight = -3.29948289e-01;
            break;
        case 2:
            prod_weight = 1.19534438e+00;
            break;
        case 3:
            prod_weight = -4.21666645e-01;
            break;
        case 4:
            prod_weight = -4.95729974e-01;
            break;
        case 5:
            prod_weight = 6.60001828e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 1:
            cons_weight = -1.80984292e+01;
            break;
        case 2:
            cons_weight = 1.32532084e+01;
            break;
        case 3:
            cons_weight = -8.28728417e+00;
            break;
        case 4:
            cons_weight = 1.31845054e+01;
            break;
        case 5:
            cons_weight = -5.20005255e-02;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 121.61150962 + 2.88275520e-04 * rel_time + 7.02838581e+00 * hops + 6.24006306e+00 * size + prod_weight + cons_weight;
}
