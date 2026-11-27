// join5: conv5 partials + shift, bias, relu + pool5, row by row, then sent whole to every fc6 task

#define LAYER   5
#define SOURCES c5_0, c5_1, c5_2, c5_3
#define TARGETS f6_0, f6_1, f6_2, f6_3, f6_4, f6_5, f6_6, f6_7

#include "./params/bias5.h"

#include "./join_pe.h"
