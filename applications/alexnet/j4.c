// join4: conv4 partials + shift, bias, relu, then conv4 to the conv5 PEs

#define LAYER   4
#define SOURCES c4_0, c4_1, c4_2, c4_3, c4_4, c4_5
#define TARGETS c5_0, c5_1, c5_2, c5_3

#include "./params/bias4.h"

#include "./join_pe.h"
