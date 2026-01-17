#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 6.54789631e+01;
            break;
        case 1:
            prod_weight = 6.93332892e+00;
            break;
        case 2:
            prod_weight = -4.24615707e+01;
            break;
        case 3:
            prod_weight = -8.22217962e+00;
            break;
        case 4:
            prod_weight = -9.02878776e+00;
            break;
        case 6:
            prod_weight = -1.26997540e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = 6.93332892e+00;
            break;
        case 1:
            cons_weight = -2.79688229e+01;
            break;
        case 2:
            cons_weight = -8.22217962e+00;
            break;
        case 3:
            cons_weight = -9.02878776e+00;
            break;
        case 4:
            cons_weight = 1.52690688e+01;
            break;
        case 5:
            cons_weight = 2.30173925e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 528.35186437 + -1.14458313e-03 * rel_time + 7.12896163e+00 * hops + 2.53055636e+00 * size + prod_weight + cons_weight;
}
