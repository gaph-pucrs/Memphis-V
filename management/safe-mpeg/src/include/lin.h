#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int lin(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    float prod_weight;
    switch (prod) {
        case 0:
            prod_weight = 1.36853893e+01;
            break;
        case 1:
            prod_weight = -6.71796551e+00;
            break;
        case 2:
            prod_weight = -7.01075709e+00;
            break;
        case 4:
            prod_weight = 4.33332706e-02;
            break;
        default:
            prod_weight = 0;
            break;
    }

    float cons_weight;
    switch (cons) {
        case 0:
            cons_weight = -6.71796551e+00;
            break;
        case 1:
            cons_weight = -7.01075709e+00;
            break;
        case 2:
            cons_weight = 4.33332706e-02;
            break;
        case 3:
            cons_weight = 1.36853893e+01;
            break;
        default:
            cons_weight = 0;
            break;
    }

    return 492.97254485 + -2.43337224e-03 * rel_time + 6.79055439e+00 * hops + 2.77332932e+00 * size + prod_weight + cons_weight;
}
