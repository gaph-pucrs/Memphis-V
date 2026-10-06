#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if      (prod == 0 && cons == 1)
        return 222.21809895833334;
    else if (prod == 0 && cons == 2)
        return 335.27783879755606;
    else if (prod == 0 && cons == 3)
        return 324.4265735229277;
    else if (prod == 0 && cons == 4)
        return 307.5851280037478;
    else if (prod == 0 && cons == 5)
        return 304.4348923886684;
    else if (prod == 0 && cons == 6)
        return 297.148792300485;
    else if (prod == 0 && cons == 7)
        return 292.2937954695767;
    else if (prod == 0 && cons == 8)
        return 298.28627232142856;
    else if (prod == 1 && cons == 0)
        return 176.31809895833334;
    else if (prod == 2 && cons == 0)
        return 208.72130594135803;
    else if (prod == 3 && cons == 0)
        return 208.71228780864197;
    else if (prod == 4 && cons == 0)
        return 208.72798514660494;
    else if (prod == 5 && cons == 0)
        return 208.7206066743827;
    else if (prod == 6 && cons == 0)
        return 208.72022087191357;
    else if (prod == 7 && cons == 0)
        return 208.72236689814815;
    else if (prod == 8 && cons == 0)
        return 208.71484375;

    return 262.4407422717029;
}
