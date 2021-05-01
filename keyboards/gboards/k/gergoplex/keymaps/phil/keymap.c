/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols/nav
#define NPAD 2 // number pad
#define NFN 3 // numbers/Fn keys
#define NAV2 4 // nav 2
#define BMOD 5 // base mods

/* Combomap
 *
 * ,-----------------------------.       ,--------------------------------.
 * |      |    ESC    |     |     |      |     |    ESC    |    BSLH      |
 * |-----+-----+-----+-----+------|      |--------------------------------|
 * |      |   BSPC   ENT    |     |      |    LES   COLN  GRT    |        | 
 * |-----+-----+-----+--RMB+-LMB--+      |--------------------------------|
 * |      |   MINS    |     |     |      |    QUO   UNDR   |     |        |
 * `------+-----+-----+------+----'      `--------------------------------'
 *  .-------------------------.           .-----------------.   
 *  |        |       |        |           |        |    |   |
 *  '-------------------------'           '-----------------' 
 */

// Blank template at the bottom
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Keymap 0: Basic layer
[BASE] = LAYOUT_gergoplex(
            KC_Q, KC_W, KC_E, KC_R, KC_T,            KC_Y, KC_U, KC_I, KC_O, KC_P,
            KC_A, KC_S, KC_D, KC_F, KC_G,            KC_H, KC_J, KC_K, KC_L, KC_SCLN,
            KC_Z, KC_X, KC_C, KC_V, KC_B,            KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
            MO(3), KC_LSFT, MO(2),            MO(1), KC_SPC, MO(5)
    ),
// Keymap 1: Symbols/Nav layer
[SYMB] = LAYOUT_gergoplex(
            KC_TAB, KC_QUOT, KC_LPRN, KC_RPRN, KC_PSCR,            KC_TRNS, KC_VOLU, KC_VOLD, KC_TRNS, KC_ESC,
            KC_MINS, KC_EQL, KC_LCBR, KC_RCBR, KC_ASTR,            KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
            MT(MOD_LCTL, KC_GRV), MT(MOD_LSFT, KC_BSLS), MT(MOD_LGUI, KC_LBRC), MT(MOD_LALT, KC_RBRC), KC_TRNS,
            KC_BSPC, MT(MOD_RALT, KC_BSPC), MT(MOD_RGUI, KC_BSPC), KC_RSFT, KC_RCTL,
            MO(4), KC_TRNS, KC_ENT,
            KC_TRNS, KC_TRNS, KC_TRNS
    ),
// Keymap 2: Number Pad layer
[NPAD]  LAYOUT_gergoplex(
            KC_TRNS, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,            KC_NLCK, KC_P7, KC_P8, KC_P9, KC_PMNS,
            KC_BTN1, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,            KC_MS_U, KC_P4, KC_P5, KC_P6, KC_PPLS,
            KC_LCTL, MT(MOD_LSFT, KC_BTN3), KC_BTN2, MT(MOD_LALT, KC_BTN1), KC_TRNS,
            KC_MS_D, KC_P1, KC_P2, KC_P3, KC_PPLS,
            KC_TRNS, KC_RALT, KC_TRNS,            KC_P0, KC_PDOT, KC_PENT
    ),
[NFN] = LAYOUT_gergoplex(
            KC_1, KC_2, KC_3, KC_4, KC_5,            KC_6, KC_7, KC_8, KC_9, KC_0,
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,            KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
            MT(MOD_LCTL, KC_F11), MT(MOD_LSFT, KC_F12), KC_LGUI, KC_LALT, KC_TRNS,
            KC_TRNS, KC_RALT, KC_RGUI, KC_RSFT, KC_RCTL,
            KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS
    ),
// Keymap 1: Symbols/Nav layer
[NAV2] = LAYOUT_gergoplex(
            KC_RALT, KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_INS, KC_HOME, KC_PGUP, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_DEL, KC_END, KC_PGDN, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_RALT, KC_RGUI, KC_RSFT, KC_RCTL,
            KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS
    ),
// Keymap 2: Number Pad layer
[BMOD]  LAYOUT_gergoplex(
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            MT(MOD_LCTL, KC_Z), MT(MOD_LSFT, KC_X), MT(MOD_LGUI, KC_C), MT(MOD_LALT, KC_V), KC_TRNS,
            KC_TRNS, MT(MOD_RALT, KC_M), MT(MOD_RGUI, KC_COMM), MT(MOD_RSFT, KC_DOT), MT(MOD_RCTL, KC_SLSH),
            KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS
    )
};
