#include QMK_KEYBOARD_H
#define _FUNCTION1 1





    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│ │RWD│PSE│FWD│VOL│
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘ └───┴───┴───┴───┘  
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│ │Num│ / │ * │ - │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│ │ 7 │ 8 │ 9 │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘ ├───┼───┼───┤ + │
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │               │ 4 │ 5 │ 6 │   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐     ├───┼───┼───┼───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │     │ 1 │ 2 │ 3 │   │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤Ent│
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │   │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
     */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_6x11(
        KC_F9,KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS, KC_MPRV, KC_MPLY,KC_MNXT, KC_MUTE,
        KC_MINS, KC_EQL,  KC_BSPC, KC_INS,   KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST,KC_PMNS,
        KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,   KC_DEL,  KC_END,  KC_PGDN ,KC_P7,KC_P8,KC_P9,KC_PPLS,
        KC_QUOT,KC_F21,KC_ENT,KC_RSFT,KC_P6,KC_F1, KC_F2, KC_P4, KC_P5, KC_P6, KC_F6,
        KC_RSFT, KC_SLASH,  KC_UP, KC_P1,KC_F17,KC_UP,KC_PENT,KC_P1,KC_P2,  KC_P3,  KC_PENT,
        KC_APP, KC_RGUI, MO(_FUNCTION1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,KC_P0, KC_F18, KC_PDOT, KC_F20,

        KC_ESC, KC_ESC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F5,KC_F6,KC_F7,KC_F8,
        KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  
        KC_SLASH,KC_LCTL, KC_LGUI, KC_LALT,KC_SPC,KC_RALT, KC_SPC,KC_F14,  KC_F15,  KC_LALT,KC_RALT,KC_RGUI


        //       KC_RGUI,KC_RALT,KC_SPC,  KC_LALT,  KC_LGUI, KC_LCTL,
        // KC_DOT,     KC_COMM,     KC_M,     KC_N,     KC_B,     KC_V,     KC_C,     KC_X,           KC_Z, KC_LSFT ,
        // KC_SCLN,     KC_L,     KC_K,     KC_J,     KC_H,     KC_G,     KC_F,     KC_D,     KC_S,  KC_A, KC_CAPS,
        // KC_P,     KC_O,     KC_I,     KC_U,     KC_Y,     KC_T,     KC_R,     KC_E,     KC_W,   KC_Q, KC_TAB,   
        // KC_0,     KC_9,     KC_8,     KC_7,     KC_6,     KC_5,     KC_4,     KC_3,     KC_2,   KC_1, KC_GRV ,   
        // KC_F8,    KC_F7,    KC_F6,    KC_F5,    KC_F4,    KC_F3,    KC_F2,            KC_F1, KC_ESC
    ),


    [_FUNCTION1] = LAYOUT_6x11(
        KC_F9,KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS, KC_MPRV, KC_MPLY,KC_MNXT, QK_BOOTLOADER,
        KC_MINS, KC_EQL,  KC_BSPC, KC_INS,   KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST,KC_PMNS,
        KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,   KC_DEL,  KC_END,  KC_PGDN ,KC_P7,KC_P8,KC_P9,KC_PPLS,
        KC_QUOT,KC_F21,KC_ENT,KC_RSFT,KC_P6,KC_F1, KC_F2, KC_P4, KC_P5, KC_P6, KC_F6,
        KC_RSFT, KC_SLASH,  KC_UP, KC_P1,KC_F17,KC_UP,KC_PENT,KC_P1,KC_P2,  KC_P3,  KC_PENT,
        KC_APP, KC_RGUI, KC_LGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,KC_P0, KC_F18, KC_PDOT, KC_F20,

        KC_ESC, KC_ESC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F5,KC_F6,KC_F7,KC_F8,
        KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  
        KC_SLASH,KC_LCTL, KC_LGUI, KC_LALT,KC_SPC,KC_RALT, KC_SPC,KC_F14,  KC_F15,  KC_LALT,KC_RALT,KC_RGUI
        ),
};


