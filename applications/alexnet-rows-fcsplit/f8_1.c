// fc8, PE 1: output neurons 250..499, on every f7's block; sends them to f8_0

#define FC_LAYER 8
#define PE       1
#define SOURCES  f7_0, f7_1, f7_2, f7_3
#define TARGETS  f8_0

#include "./params/fc8_1_weight.h"
#include "./params/fc8_1_bias.h"

#include "./fc_pe.h"
