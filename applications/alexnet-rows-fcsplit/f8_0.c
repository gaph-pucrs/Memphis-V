// fc8, PE 0: output neurons 0..249, on every f7's block; gathers the other f8s' blocks, takes the class, ends the app

#define FC_LAYER 8
#define PE       0
#define SOURCES  f7_0, f7_1, f7_2, f7_3
#define GATHER   f8_1, f8_2, f8_3

#include "./params/fc8_0_weight.h"
#include "./params/fc8_0_bias.h"

#include "./fc_pe.h"
