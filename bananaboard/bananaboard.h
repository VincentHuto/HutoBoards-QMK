#pragma once

#include "quantum.h"
#define BONGO_ENABLE

enum oled_modes {
  OLED_BONGO,
  OLED_BONGO_MIN
};
#define LAYOUT_numpad_5x4( \
    K00, K01, K02, K03, K04, K05, K06, K07,\
    K10, K11, K12, K15, K16\
) { \
    { K00,   K01,   K02,   K03, K04,   K05,   K06,   K07 }, \
    { K10,   K11,   K12,   KC_NO, KC_NO,   K15,   K16,   KC_NO }, \
}
