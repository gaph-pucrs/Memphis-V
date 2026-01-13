#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int avg(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
    if      (prod == 5 && cons == 1)
        return 881.4573412698413;
    else if (prod == 5 && cons == 2)
        return 1028.266865079365;
    else if (prod == 5 && cons == 3)
        return 1014.8878968253969;
    else if (prod == 5 && cons == 4)
        return 1026.907738095238;
    else if (prod == 0 && cons == 1)
        return 840.3448908730159;
    else if (prod == 0 && cons == 2)
        return 864.7676091269841;
    else if (prod == 0 && cons == 3)
        return 844.1775297619048;
    else if (prod == 0 && cons == 4)
        return 865.6319444444445;
    else if (prod == 1 && cons == 5)
        return 217.57256944444444;
    else if (prod == 2 && cons == 5)
        return 216.56825396825397;
    else if (prod == 3 && cons == 5)
        return 215.92470238095237;
    else if (prod == 4 && cons == 5)
        return 215.96438492063493;

    return 546.1619362175765;
}
