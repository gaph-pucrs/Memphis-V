// fc7, PE 0: output neurons 0..1023, on every f6's block; sends them to every f8

#define FC_LAYER 7
#define PE       0
#define SOURCES  f6_0, f6_1, f6_2, f6_3, f6_4, f6_5, f6_6, f6_7
#define TARGETS  f8_0, f8_1, f8_2, f8_3

#include "./params/fc7_0_weight.h"
#include "./params/fc7_0_bias.h"

#include "./fc_pe.h"
