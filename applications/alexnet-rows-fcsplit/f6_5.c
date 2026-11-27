// fc6, PE 5: output neurons 2560..3071, on pool5 whole from j5; sends them to every f7

#define FC_LAYER 6
#define PE       5
#define SOURCES  j5
#define TARGETS  f7_0, f7_1, f7_2, f7_3

#include "./params/fc6_5_weight.h"
#include "./params/fc6_5_bias.h"

#include "./fc_pe.h"
