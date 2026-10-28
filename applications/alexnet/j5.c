// join5: conv5 partials + conv_join + pool5 (the classifier is not wired up yet: no TARGETS)

#define LAYER   5
#define SOURCES c5_0, c5_1, c5_2, c5_3

#include "./params/bias5.h"

#include "./join_pe.h"
