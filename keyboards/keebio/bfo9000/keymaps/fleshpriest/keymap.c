#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _ENGRAM 1
#define _MOVE   2
#define _SYM    3

// KC_LCTL, KC_LGUI, KC_LALT, LT(2,KC_APP), LT(1,KC_F24), KC_BSPC, LT(2,KC_DEL), KC_F22, KC_F23, KC_RCTL, KC_F12, LT(2,KC_ENT), KC_SPC, KC_RALT, KC_HOME, KC_END, KC_LBRC, KC_RBRC),

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// const uint16_t PROGMEM layerNames[][MATRIX_ROWS][MATRIX_COLS] = {

// [_QWERTY] = LAYOUT( // default
//     KC_ESC,  KC_VOLU, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
//     KC_HOME, KC_VOLD, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,             KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
//     KC_END,  KC_TAB,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,             KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
//     KC_PGUP, KC_CAPS, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,             KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,
//     KC_PGDN, KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,             KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   XXXXXXX,
//     KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_ENT,           KC_BSPC, KC_SPC,  KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
// ),
[_QWERTY] = LAYOUT( // my corrected layout
    KC_CAPS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_MPRV, KC_UP  , KC_MNXT,          KC_MPLY, KC_UP  , KC_MUTE, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LEFT, KC_DOWN, KC_RGHT,          KC_LEFT, KC_DOWN, KC_RGHT, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_F13 , KC_F14 , KC_F15 ,          KC_PSCR, KC_SCRL, KC_NUM , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
    KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_F16 , KC_F17 , KC_F18 ,          KC_LBRC, KC_INS , KC_PGUP, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_F19 , KC_F20 , KC_F21 ,          KC_RBRC, KC_PAUS, KC_PGDN, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_MENU, KC_F24 , KC_BSPC, KC_DEL , KC_F22 , KC_F23 ,          KC_BSLS, KC_F12 , KC_ENT , KC_SPC , KC_RALT, KC_HOME, KC_END , KC_RGUI, KC_RCTL
),
[_ENGRAM] = LAYOUT(
    KC_CAPS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_MPRV, KC_UP  , KC_MNXT,          KC_MPLY, KC_UP  , KC_MUTE, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LEFT, KC_DOWN, KC_RGHT,          KC_LEFT, KC_DOWN, KC_RGHT, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
    KC_TAB , KC_B   , KC_Y   , KC_O   , KC_U   , _______, KC_F13 , KC_F14 , KC_F15 ,          KC_PSCR, KC_SCRL, KC_NUM , _______, KC_L   , KC_D   , KC_W   , KC_V   , KC_Z   ,
    KC_ESC , KC_C   , KC_I   , KC_E   , KC_A   , _______, KC_F16 , KC_F17 , KC_F18 ,          KC_LBRC, KC_INS , KC_PGUP, _______, KC_H   , KC_T   , KC_S   , KC_N   , KC_Q   ,
    KC_LSFT, KC_G   , KC_X   , KC_J   , KC_J   , _______, KC_F19 , KC_F20 , KC_F21 ,          KC_RBRC, KC_PAUS, KC_PGDN, _______, KC_R   , KC_M   , KC_F   , KC_P   , KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_MENU, KC_F24 , KC_BSPC, KC_DEL , KC_F22 , KC_F23 ,          KC_BSLS, KC_F12 , KC_ENT , KC_SPC , KC_RALT, KC_HOME, KC_END , KC_RGUI, KC_RCTL
),
[_MOVE] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_SYM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______
),
};
