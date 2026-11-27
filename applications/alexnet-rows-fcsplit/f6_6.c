// fc6, PE 6: output neurons 3072..3583, on pool5 whole from j5; sends them to every f7

#define FC_LAYER 6
#define PE       6
#define SOURCES  j5
#define TARGETS  f7_0, f7_1, f7_2, f7_3

#include "./params/fc6_6_weight.h"
#include "./params/fc6_6_bias.h"

#include "./fc_pe.h"
