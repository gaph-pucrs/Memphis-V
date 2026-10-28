// join1: conv1 partials + conv_join + pool1, then pool1 to the conv2 PEs

#define LAYER   1
#define SOURCES c1_0, c1_1, c1_2
#define TARGETS c2_0, c2_1, c2_2, c2_3, c2_4, c2_5, c2_6, c2_7

#include "./params/bias1.h"

#include "./join_pe.h"
