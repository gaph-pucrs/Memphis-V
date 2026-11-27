// fc6, PE 3: output neurons 1536..2047, on pool5 whole from j5; sends them to every f7

#define FC_LAYER 6
#define PE       3
#define SOURCES  j5
#define TARGETS  f7_0, f7_1, f7_2, f7_3

#include "./params/fc6_3_weight.h"
#include "./params/fc6_3_bias.h"

#include "./fc_pe.h"
