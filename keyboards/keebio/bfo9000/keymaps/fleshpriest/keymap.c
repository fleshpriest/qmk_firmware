#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _ENGRAM 1
#define _ENGSYM 2
#define _MOVE   3
#define _SYM    4

#define FN_F24  LT(3, KC_F24)
#define FN_MENU LT(4, KC_APP)
#define WN_LEFT RGUI(KC_LEFT)
#define WN_DOWN RGUI(KC_DOWN)
#define WN_UP   RGUI(KC_UP  )
#define WN_RGHT RGUI(KC_RGHT)
#define SC_MAX  RGUI(KC_PGUP)
#define SC_MIN  RGUI(KC_PGDN)
#define SC_LEFT  RSG(KC_LEFT)
#define SC_RGHT  RSG(KC_RGHT)
#define LY_QWER   DF(0)
#define LY_ENGR   DF(1)

// Home Row Mods
#define HRM_Q_A   LCTL_T(KC_A   )
#define HRM_Q_S   LGUI_T(KC_S   )
#define HRM_Q_D   LALT_T(KC_D   )
#define HRM_Q_F   LSFT_T(KC_F   )
#define HRM_Q_J   RSFT_T(KC_J   )
#define HRM_Q_K   RALT_T(KC_K   )
#define HRM_Q_L   RGUI_T(KC_L   )
#define HRM_Q_C   RCTL_T(KC_SCLN)

#define HRM_E_C   LCTL_T(KC_C   )
#define HRM_E_I   LGUI_T(KC_I   )
#define HRM_E_E   LALT_T(KC_E   )
#define HRM_E_A   LSFT_T(KC_A   )
#define HRM_E_H   RSFT_T(KC_H   )
#define HRM_E_T   RALT_T(KC_T   )
#define HRM_E_S   RGUI_T(KC_S   )
#define HRM_E_N   RCTL_T(KC_N   )

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
    KC_CAPS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_MPRV, KC_UP  , KC_MNXT,          KC_MPLY, KC_UP  , KC_MUTE, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LEFT, KC_DOWN, KC_RGHT,          KC_LEFT, KC_DOWN, KC_RGHT, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_F13 , KC_F14 , KC_F15 ,          KC_PSCR, KC_SCRL, KC_NUM , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
    KC_ESC , HRM_Q_A, HRM_Q_S, HRM_Q_D, HRM_Q_F, KC_G   , KC_F16 , KC_F17 , KC_F18 ,          KC_LBRC, KC_INS , KC_PGUP, KC_H   , HRM_Q_J, HRM_Q_K, HRM_Q_L, HRM_Q_C, KC_QUOT,
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_F19 , KC_F20 , KC_F21 ,          KC_RBRC, KC_PAUS, KC_PGDN, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, FN_MENU, FN_F24 , KC_BSPC, KC_DEL , KC_F22 , KC_F23 ,          KC_BSLS, KC_F12 , KC_ENT , KC_SPC , KC_RALT, KC_HOME, KC_END , KC_RGUI, KC_RCTL
    ),
[_ENGRAM] = LAYOUT(
    KC_CAPS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_MPRV, KC_UP  , KC_MNXT,          KC_MPLY, KC_UP  , KC_MUTE, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LEFT, KC_DOWN, KC_RGHT,          KC_LEFT, KC_DOWN, KC_RGHT, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSLS,
    KC_TAB , KC_B   , KC_Y   , KC_O   , KC_U   , KC_SCLN, KC_F13 , KC_F14 , KC_F15 ,          KC_PSCR, KC_SCRL, KC_NUM , KC_SLSH, KC_L   , KC_D   , KC_W   , KC_V   , KC_Z   ,
    KC_ESC , HRM_E_C, HRM_E_I, HRM_E_E, HRM_E_A, KC_COMM, KC_F16 , KC_F17 , KC_F18 ,          KC_LBRC, KC_INS , KC_PGUP, KC_DOT , HRM_E_H, HRM_E_T, HRM_E_S, HRM_E_N, KC_Q   ,
    KC_LSFT, KC_G   , KC_X   , KC_J   , KC_K   , KC_MINS, KC_F19 , KC_F20 , KC_F21 ,          KC_RBRC, KC_PAUS, KC_PGDN, KC_EQL , KC_R   , KC_M   , KC_F   , KC_P   , KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, FN_MENU, FN_F24 , KC_BSPC, KC_DEL , KC_F22 , KC_F23 ,          KC_BSLS, KC_F12 , KC_ENT , KC_SPC , KC_RALT, KC_HOME, KC_END , KC_RGUI, KC_RCTL
    ),

[_ENGSYM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
[_MOVE] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          LY_QWER, _______, LY_ENGR, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,          _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, WN_LEFT, WN_DOWN, WN_UP  , WN_RGHT, XXXXXXX, _______, _______, _______,          _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX,
    _______, SC_LEFT, SC_MIN , SC_MAX , SC_RGHT, XXXXXXX, _______, _______, _______,          _______, _______, _______, _______, KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
[_SYM] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______, _______, KC_PIPE, KC_LCBR, KC_RCBR, _______, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______, _______, KC_BSLS, KC_LBRC, KC_RBRC, _______, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______, _______, _______, _______, _______, _______, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
