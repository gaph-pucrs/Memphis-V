#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if (prod == 4 && cons == 2)
        return 870;
    else if (prod == 2 && cons == 1)
        return 675;
    else if (prod == 1 && cons == 0)
        return 674;
    else if (prod == 0 && cons == 3)
        return 713;

    return 733;
}
