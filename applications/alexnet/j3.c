// join3: conv3 partials + shift, bias, relu, then conv3 to the conv4 PEs

#define LAYER   3
#define SOURCES c3_0, c3_1, c3_2, c3_3
#define TARGETS c4_0, c4_1, c4_2, c4_3, c4_4, c4_5

#include "./params/bias3.h"

#include "./join_pe.h"
