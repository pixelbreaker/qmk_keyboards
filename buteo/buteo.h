#pragma once

#include "quantum.h"

#define XXX KC_NO

// clang-format off
#define LAYOUT_23332x2_enc( \
         K00, K01, K02, K03, K04,        K15, K16, K17, K18, K19, \
         K05, K06, K07, K08, K09,        K20, K21, K22, K23, K24, \
              K10, K11, K12,                  K25, K26, K27,      \
                        K13, K14,  K30,  K28, K29                 \
    ) {                                        \
        { K00,   K01,   K02,   K03,   K04,   XXX }, \
        { K05,   K06,   K07,   K08,   K09,   XXX }, \
        { K10,   K11,   K12,   K13,   K14,   XXX }, \
        { K15,   K16,   K17,   K18,   K19,   XXX }, \
        { K20,   K21,   K22,   K23,   K24,   XXX }, \
        { K25,   K26,   K27,   K28,   K29,   K30 }  \
    }
