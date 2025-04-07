// NOTE:
// - Add switching workspaces on RAISE or LOWER
// - Add french accented letter


#include QMK_KEYBOARD_H

// #define T_GAMNG TG(_GAMING)
// #define M_ADJST MO(_ADJUST)

enum layer_number {
    _QWERTY = 0,
    _LOWER = 1,
    _RAISE = 2,
    _ADJUST = 3,
    _GAMING = 10,
    _LGAMING = 11,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |MT_CTL|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   K  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */

 [_QWERTY] = LAYOUT(
                KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
                KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  MT(MOD_LCTL, KC_ESC),   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC, KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                                       KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT, MO(_RAISE), KC_BSPC, KC_BSLS
),
    /* LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |   ~  |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|   _  |      |      |   {  |   }  |   |  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |ADJUST|BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TILD,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_UNDS, _______, _______, KC_LCBR, KC_RCBR, KC_PIPE,
                             _______, _______, _______, _______, _______, _______, _______, _______
),
    /* RAISE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |   ^  |   &  |   *  |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   ~  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------| Left | Down |  Up  |Right |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|   +  |   -  |   =  |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |ADJUST| /LEADER /       \Enter \  |RAISE |BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */

[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   KC_CIRC, KC_AMPR, KC_ASTR, _______, _______, _______,
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_PLUS, KC_MINS, KC_EQL,  _______, _______, _______,
                             _______, _______, _______, QK_LEAD, _______, _______, _______, _______
),
    /* ADJUST
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |GAMING|      |      |      |      |                    |      |      | MPLY | MPRV | MNXT |VOLUP |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |VOLDWN|
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |DT_UP |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |DT_DWN|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
  [_ADJUST] = LAYOUT(
  _______, TG(_GAMING), _______, _______, _______, _______,               _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLU,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, KC_VOLD,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, DT_UP,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DT_DOWN,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  ),

    // ========== GAMING ==========
    /* GAMING layer
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
  [_GAMING] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, MO(_LGAMING), _______, _______,  _______, _______, _______
  ),

    /* LOWER GAMING layer
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | BASE |   6  |   7  |   8  |   9  |   0  |                    |      |      | MPLY | MPRV | MNXT |VOLUP |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   -  |   Y  |   U  |   I  |   O  |   P  |                    |      |      |      |      |      |VOLDWN|
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   '  |   H  |   J  |   K  |   L  |   ;  |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|   ]   |    |       |------+------+------+------+------+------|
     * |   \  |   /  |   ,  |   .  |   N  |   M  |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
  [_LGAMING] = LAYOUT(
  TG(_GAMING),KC_6, KC_7,    KC_8,    KC_9,    KC_0,                      _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLU,
  KC_MINS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,                      _______, _______, _______, _______, _______, KC_VOLD,
  KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,                   _______, _______, _______, _______, _______, _______,
  KC_BSLS, KC_SLSH, KC_COMM, KC_DOT,  KC_N,    KC_M,    KC_RBRC, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )

// Empty layout
    /*
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|   \  |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
  // [_ADJUST] = LAYOUT(
  // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //                            _______, _______, _______, _______, _______,  _______, _______, _______
  // )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return OLED_ROTATION_0;
    }
}

// TODO: Customize OLED
void render_default_layer_state(void) {
    oled_write_P(PSTR("Layer\n"), false);
    // oled_write_P(PSTR(" "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("BASE"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJST"), false);
            break;
        case _GAMING:
            oled_write_P(PSTR("GAMNG"), false);
            break;
        default:
            oled_write_P(PSTR("N/A"), false);
    }
}

// When you add source files to SRC in rules.mk, you can use functions.
// const char *read_layer_state(void);
const char *read_logo(void);
// void        set_keylog(uint16_t keycode, keyrecord_t *record);
// const char *read_keylog(void);
// const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void render_status_main(void) {
    // Show keyboard layout
    render_default_layer_state();
    // Add a empty line
    oled_write_P(PSTR("\n-----\n"), false);
    // Show host keyboard led status
    // render_keylock_status(host_keyboard_led_state());
    // Add a empty line
    // oled_write_P(PSTR("-----"), false);
    // Show modifier status
    // render_mod_status(get_mods());
    // Add a empty line
    // oled_write_P(PSTR("-----"), false);
    // render_keylogger_status();
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status_main();
    } else {
        oled_write(read_logo(), false);
    }
    return false;
}
#endif // OLED_ENABLE

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     if (record->event.pressed) {
// #ifdef OLED_ENABLE
//         set_keylog(keycode, record);
// #endif
//         // set_timelog();
//     }
//     return true;
// }

// -------- TAP-HOLD --------
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DT_UP:
            if (record->event.pressed) {
                g_tapping_term += 50;
            }
            break;
        case DT_DOWN:
            if (record->event.pressed) {
                g_tapping_term -= 50;
            }
            break;
    }
    return true;
}

// -------- LEADER --------

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_E)) {
        SEND_STRING("opening yazi");
    }
}
