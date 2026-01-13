#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if      (prod == 5 && cons == 0)
        return 560.0065476190476;
    else if (prod == 5 && cons == 1)
        return 585.8576016865079;
    else if (prod == 5 && cons == 2)
        return 586.3183159722222;
    else if (prod == 5 && cons == 3)
        return 589.077591765873;
    else if (prod == 5 && cons == 4)
        return 587.0827132936508;
    else if (prod == 0 && cons == 6)
        return 792.3447222222222;
    else if (prod == 1 && cons == 6)
        return 788.6331746031746;
    else if (prod == 2 && cons == 6)
        return 789.9101984126984;
    else if (prod == 3 && cons == 6)
        return 788.667380952381;
    else if (prod == 4 && cons == 6)
        return 789.9760416666667;

    return 697.356192680776;
}
