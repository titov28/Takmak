#include QMK_KEYBOARD_H

#include "takmak.h"

// Defines names for use in layer keycodes and the keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		XXXXXXX, KC_GRV,   KC_1,       KC_2,       KC_3,         KC_4,          KC_5,          KC_ESC,             XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
		XXXXXXX, KC_TAB,   KC_Q,       KC_W,       KC_E,         KC_R,          KC_T,          XXXXXXX,            XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
		XXXXXXX, XXXXXXX,  KC_A,       KC_S,       KC_D,         KC_F,          KC_G,          XXXXXXX,            KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,
		XXXXXXX, KC_LSFT,  KC_Z,       KC_X,       KC_C,         KC_V,          KC_B,          KC_SPC,             KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, KC_LSFT,
		XXXXXXX, KC_LCTL,  KC_LGUI,    KC_LALT,    XXXXXXX,      MO(1),                                                              MO(2),   KC_RGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
	),

	[1] = LAYOUT(
		XXXXXXX, XXXXXXX,  KC_F1,      KC_F2,      KC_F3,        KC_F4,         KC_F5,         XXXXXXX,           QK_BOOT, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		XXXXXXX, _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,       XXXXXXX,           XXXXXXX, XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,       XXXXXXX,           KC_BSPC, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,       _______,           _______, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, _______,  _______,    _______,    XXXXXXX,      XXXXXXX,                                                           KC_0,    XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_DEL
	),

	[2] = LAYOUT(
		XXXXXXX, XXXXXXX,  XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,       QK_BOOT,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT,
		XXXXXXX, _______,  XXXXXXX,    KC_MS_BTN1, KC_MS_UP,     KC_MS_BTN2,    KC_MS_WH_UP,   XXXXXXX,           XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX, KC_VOLD, KC_VOLU,
		XXXXXXX, _______,  XXXXXXX,    KC_MS_LEFT, KC_MS_DOWN,   KC_MS_RIGHT,   KC_MS_WH_DOWN, XXXXXXX,           KC_BSPC, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,       _______,           _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, _______,  _______,    _______,    XXXXXXX,      XXXXXXX,                                                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
	)

};
