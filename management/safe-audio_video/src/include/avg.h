#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if (prod == 6 && cons == 1)
        return 553.8615079365079;
    else if (prod == 6 && cons == 4)
        return 875.331498015873;
    else if (prod == 1 && cons == 0)
        return 701.4128968253968;
    else if (prod == 0 && cons == 5)
        return 694.224751984127;
    else if (prod == 4 && cons == 3)
        return 691.7227678571429;
    else if (prod == 3 && cons == 2)
        return 689.7643353174603;
    else if (prod == 2 && cons == 5)
        return 707.4255952380952;

    return 701.9633361678004;
}
