#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 3.99939042e+01;
            break;
        case 1:
            prod_weight = 3.03319899e+01;
            break;
        case 2:
            prod_weight = -2.51642649e+01;
            break;
        case 3:
            prod_weight = -1.42358909e+01;
            break;
        case 4:
            prod_weight = -1.33279118e+01;
            break;
        case 6:
            prod_weight = -1.75978265e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = 3.03319899e+01;
            break;
        case 1:
            cons_weight = -3.01713877e+01;
            break;
        case 2:
            cons_weight = -1.42358909e+01;
            break;
        case 3:
            cons_weight = -1.33279118e+01;
            break;
        case 4:
            cons_weight = 1.25735612e+01;
            break;
        case 5:
            cons_weight = 1.48296393e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 534.35065605 + -3.16211254e-03 * rel_time + 1.05355063e+01 * hops + 2.50591553e+00 * size + prod_weight + cons_weight;
}
