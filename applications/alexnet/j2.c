// join2: conv2 partials + conv_join + pool2, then pool2 to the conv3 PEs

#define LAYER   2
#define SOURCES c2_0, c2_1, c2_2, c2_3, c2_4, c2_5, c2_6, c2_7
#define TARGETS c3_0, c3_1, c3_2, c3_3

#include "./params/bias2.h"

#include "./join_pe.h"
