/* Copyright 2022 Paula Kammler
 * Keymap for a dz60 with the neo layout
 * 2 variants for linux or windows and macos
 */

#include QMK_KEYBOARD_H
#include "keymap_german_mac_iso.h"
#include "layers.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ ´ │ Backsp│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │ Tab │ X │ V │ L │ C │ W │ K │ H │ G │ F │ Q │ ß │   │     │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent│
     * │ Mod3 │ U │ I │ A │ E │ O │ S │ N │ R │ T │ D │ Y │ M3│    │
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
     * │Shft│M4 │ Ü │ Ö │ Ä │ P │ Z │ B │ M │ , │ . │ J │    Shift │
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    [NEO_1_OSX] = LAYOUT_60_iso(
        KC_ESC,        KC_1,      KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DE_MINS, DE_ACUT,       KC_BSPC,
        KC_TAB,        KC_X,      KC_V,    KC_L,    KC_C,    KC_W,    KC_K,    KC_H,    KC_G,    KC_F,    KC_Q,    DE_SS,   DE_ACUT,
        MO(NEO_3_OSX), KC_U,      KC_I,    KC_A,    KC_E,    KC_O,    KC_S,    KC_N,    KC_R,    KC_T,    KC_D,    DE_Y,    MO(NEO_3_OSX), KC_ENT,
        KC_LSFT,       MO(NEO_4), DE_UDIA, DE_ODIA, DE_ADIA, KC_P,    DE_Z,    KC_B,    KC_M,    KC_COMM, KC_DOT,  KC_J,                   KC_RSFT,
        KC_LCTL,       KC_LALT,   KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, KC_RCTL,       DF(NEO_1_LIX)
    ),
    [NEO_1_LIX] = LAYOUT_60_iso(
        KC_ESC,        KC_1,      KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DE_MINS, DE_GRV,        KC_BSPC,
        KC_TAB,        KC_X,      KC_V,    KC_L,    KC_C,    KC_W,    KC_K,    KC_H,    KC_G,    KC_F,    KC_Q,    KC_MINS, KC_RBRC,
        MO(NEO_3_LIX), KC_U,      KC_I,    KC_A,    KC_E,    KC_O,    KC_S,    KC_N,    KC_R,    KC_T,    KC_D,    DE_Y,    MO(NEO_3_LIX), KC_ENT,
        KC_LSFT,       MO(NEO_4), DE_UDIA, DE_ODIA, DE_ADIA, KC_P,    DE_Z,    KC_B,    KC_M,    KC_COMM, KC_DOT,  KC_J,                   KC_RSFT,
        KC_LCTL,       KC_LALT,   KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, KC_RCTL,       DF(NEO_1_OSX)
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │   │   │   │   │ › │ ‹ │ ¢ │ \ │ ‚ │ ‘ │ ’ │   │ ˚ │       │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │     │ … │ _ │ [ │ ] │ ^ │ ! │ < │ > │ = │ & │ ſ │  ̷̷ │     │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent│
     * │      │ \ │ / │ { │ } │ * │ ? │ ( │ ) │ - │ : │ @ │   │    │
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
     * │    │   │ # │ $ │ | │ ~ │ ` │ + │ % │ " │ ' │ ; │          │
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    [NEO_3_OSX] = LAYOUT_60_iso(
        KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   DE_RSAQ, DE_LSAQ, DE_CENT, DE_YEN,  DE_SLQU,    DE_DLQU, DE_LDQU, KC_NO,   DE_RABK, KC_TRNS,
        KC_TRNS,  DE_ELLP, DE_UNDS, DE_LBRC, DE_RBRC, DE_LABK, DE_EXLM, DE_CIRC, S(DE_CIRC), DE_EQL,  DE_AMPR, KC_NO,   KC_NO,
        KC_TRNS,  DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN,    DE_MINS, DE_COLN, DE_AT,   KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,  DE_PLUS, DE_PERC,    DE_DQUO, DE_QUOT, DE_SCLN,          KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [NEO_3_LIX] = LAYOUT_60_iso(
        KC_TRNS,  KC_NO,         KC_NO,   KC_NO,      DE_RSAQ,       DE_LSAQ, DE_CENT,    DE_YEN,  DE_SLQU, DE_DLQU, DE_LDQU, KC_NO,      DE_RNGA, KC_TRNS,
        KC_TRNS,  DE_ELLP,       DE_UNDS, ALGR(DE_8), ALGR(DE_9),    DE_CIRC, DE_EXLM,    DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, KC_NO,      KC_NO,
        KC_TRNS,  ALGR(KC_MINS), DE_SLSH, ALGR(DE_7), ALGR(DE_0),    DE_ASTR, DE_QUES,    DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, ALGR(DE_Q), KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS,       DE_HASH, DE_DLR,     ALGR(DE_LABK), DE_TILD, S(DE_ACUT), DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN,             KC_TRNS,
        KC_TRNS,  KC_TRNS,       KC_TRNS,                            KC_TRNS,                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │     │   │<x-│ ^ │-x>│   │   │ 7 │ 8 │ 9 │   │   │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent│
     * │      │   │ < │ v │ > │   │   │ 4 │ 5 │ 6 │   │   │   │    │
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
     * │    │   │   │   │   │ENT│   │   │ 1 │ 2 │ 3 │   │          │
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    [NEO_4] = LAYOUT_60_iso(
        KC_TRNS,  KC_BRMD, KC_BRMU, LCTL(KC_UP), LCTL(KC_ENT), BL_OFF,  BL_ON,   KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS,
        KC_TRNS,  KC_NO,   KC_BSPC, KC_UP,       KC_DEL,       KC_NO,   KC_NO,   KC_KP_7, KC_KP_8, KC_KP_9, KC_NO,   KC_NO,   KC_NO,
        KC_TRNS,  KC_NO,   KC_LEFT, KC_DOWN,     KC_RIGHT,     KC_NO,   KC_NO,   KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_ESC,  KC_NO,       KC_NO,        KC_ENT,  KC_NO,   KC_NO,   KC_KP_1, KC_KP_2, KC_KP_3, KC_NO,            KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS,                                     KC_KP_0,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
