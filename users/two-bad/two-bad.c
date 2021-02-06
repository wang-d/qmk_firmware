// generated from users/two-bad/readme.org  -*- buffer-read-only: t -*-

#include QMK_KEYBOARD_H

#define KC_SPLA MT(MOD_LALT, KC_SPC)
#define KC_SPLC MT(MOD_LCTL, KC_SPC)
#define KC_1SLS OSM(MOD_LSFT)

#include "g/keymap_combo.h"

enum layers { _ABC };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [_ABC] =
LAYOUT_two_bad(
KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   , KC_J   , KC_L   , KC_U   , KC_Y   , KC_BSPC,
KC_A   , KC_R   , KC_S   , KC_T   , KC_D   , KC_H   , KC_N   , KC_E   , KC_I   , KC_O   ,
KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
KC_NO  , KC_NO  , KC_NO  , KC_1SLS, KC_SPLC, KC_SPLA, KC_1SLS, KC_NO  , KC_NO  , KC_NO
)
};
