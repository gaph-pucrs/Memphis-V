#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if      (prod == 5 && cons == 1)
        return 879.5701884920635;
    else if (prod == 5 && cons == 2)
        return 1025.6165674603174;
    else if (prod == 5 && cons == 3)
        return 1011.5389384920635;
    else if (prod == 5 && cons == 4)
        return 1010.4885912698413;
    else if (prod == 0 && cons == 1)
        return 837.8267857142857;
    else if (prod == 0 && cons == 2)
        return 862.1862723214285;
    else if (prod == 0 && cons == 3)
        return 841.4115575396826;
    else if (prod == 0 && cons == 4)
        return 862.9619543650794;
    else if (prod == 1 && cons == 5)
        return 174.36979166666666;
    else if (prod == 2 && cons == 5)
        return 175.42628968253968;
    else if (prod == 3 && cons == 5)
        return 174.30208333333334;
    else if (prod == 4 && cons == 5)
        return 174.36284722222223;

    return 524.2936946501161;
}
