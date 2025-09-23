#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 6.61183335e+01;
            break;
        case 1:
            prod_weight = 7.41988279e+00;
            break;
        case 2:
            prod_weight = -4.26432677e+01;
            break;
        case 3:
            prod_weight = -8.30406373e+00;
            break;
        case 4:
            prod_weight = -9.44147992e+00;
            break;
        case 6:
            prod_weight = -1.31494049e+01;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = 7.41988279e+00;
            break;
        case 1:
            cons_weight = -2.85478486e+01;
            break;
        case 2:
            cons_weight = -8.30406373e+00;
            break;
        case 3:
            cons_weight = -9.44147992e+00;
            break;
        case 4:
            cons_weight = 1.53984437e+01;
            break;
        case 5:
            cons_weight = 2.34750657e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 534.35065605 + -1.17952489e-03 * rel_time + 7.00527400e+00 * hops + 2.57421056e+00 * size + prod_weight + cons_weight;
}
