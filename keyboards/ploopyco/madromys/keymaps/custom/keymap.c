//       ____  __                           ___       __           __
//      / __ \/ /___  ____  ____  __  __   /   | ____/ /__  ____  / /_
//     / /_/ / / __ \/ __ \/ __ \/ / / /  / /| |/ __  / _ \/ __ \/ __/
//    / ____/ / /_/ / /_/ / /_/ / /_/ /  / ___ / /_/ /  __/ /_/ / /_
//   /_/   /_/\____/\____/ .___/\__, /  /_/  |_\__,_/\___/ .___/\__/
//                      /_/    /____/                   /_/

// Mouse buttons:
// BTN1 = Left click
// BTN2 = Right click
// BTN3 = Middle click
// BTN4 = Rear thumb click
// BTN5 = Forward thumb click

#include QMK_KEYBOARD_H

enum layer_number {
    _BASE   = 0,
    _ADJUST = 1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        MT(MO(_ADJUST), KC_BTN4), KC_BTN3, DRAG_SCROLL, KC_BTN2,
                   KC_BTN1,                       KC_BTN5
    ),
    [_ADJUST] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, DPI_CONFIG,
        XXXXXXX,                      XXXXXXX
    ),
};
