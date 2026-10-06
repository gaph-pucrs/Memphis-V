#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 4.44451195e+01;
            break;
        case 1:
            prod_weight = -3.38887374e+01;
            break;
        case 2:
            prod_weight = -1.52900252e+00;
            break;
        case 3:
            prod_weight = -1.51927149e+00;
            break;
        case 4:
            prod_weight = -1.51222395e+00;
            break;
        case 5:
            prod_weight = -1.50692469e+00;
            break;
        case 6:
            prod_weight = -1.50162234e+00;
            break;
        case 7:
            prod_weight = -1.49632109e+00;
            break;
        case 8:
            prod_weight = -1.49101597e+00;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -4.44451195e+01;
            break;
        case 1:
            cons_weight = -7.06972446e+01;
            break;
        case 2:
            cons_weight = 4.32231192e+01;
            break;
        case 3:
            cons_weight = 3.23836837e+01;
            break;
        case 4:
            cons_weight = 1.55297395e+01;
            break;
        case 5:
            cons_weight = 1.23898512e+01;
            break;
        case 6:
            cons_weight = 5.10710947e+00;
            break;
        case 7:
            cons_weight = 2.52930786e-01;
            break;
        case 8:
            cons_weight = 6.25593022e+00;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 88.93406611 + -1.46842770e-04 * rel_time + 6.99991339e+00 * hops + 1.65965952e+01 * size + prod_weight + cons_weight;
}
