// join5: conv5 partials + shift, bias, relu + pool5, sent whole to the classifier (fc6, fc7, fc8)

#define LAYER   5
#define SOURCES c5_0, c5_1, c5_2, c5_3
#define TARGETS classifier

#include "./params/bias5.h"

#include "./join_pe.h"
