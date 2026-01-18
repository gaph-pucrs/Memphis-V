#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if      (prod == 5 && cons == 0)
        return 561.6387028769841;
    else if (prod == 5 && cons == 1)
        return 588.0352678571429;
    else if (prod == 5 && cons == 2)
        return 588.218005952381;
    else if (prod == 5 && cons == 3)
        return 591.0101314484127;
    else if (prod == 5 && cons == 4)
        return 589.106324404762;
    else if (prod == 0 && cons == 6)
        return 795.3932242063493;
    else if (prod == 1 && cons == 6)
        return 791.5802976190477;
    else if (prod == 2 && cons == 6)
        return 792.8911011904762;
    else if (prod == 3 && cons == 6)
        return 791.7160615079365;
    else if (prod == 4 && cons == 6)
        return 792.9705456349207;

    return 699.8842195767196;
}
