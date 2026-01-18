#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if (prod == 6 && cons == 1)
        return 549.8095486111112;
    else if (prod == 6 && cons == 4)
        return 875.9239211309524;
    else if (prod == 1 && cons == 0)
        return 644.4921999007937;
    else if (prod == 0 && cons == 5)
        return 718.7315476190477;
    else if (prod == 4 && cons == 3)
        return 692.6780753968254;
    else if (prod == 3 && cons == 2)
        return 694.243179563492;
    else if (prod == 2 && cons == 5)
        return 691.1180803571428;

    return 695.2852217970521;
}
