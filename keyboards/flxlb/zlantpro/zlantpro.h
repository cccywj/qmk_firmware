#pragma once

#include "quantum.h"

// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define LAYOUT( \
		L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, R07,\
	   L10,   L11, L12, L13, L14, L15, L16, R10, R11, R12, R13, R14, R15,    R16, \
	  L20,   L21, L22, L23, L24, L25, L26, R20, R21, R22, R23, R24,         R25, \
	 L30,     L31, L32, L33, L34, L35, R30, R31, R32, R33, R34,            R35, \
    L40,     L41,  L42,  L43,    L44,   R40,   R41,  R42,  R43,  R44 \
) { \
	{ KC_NO, L00, L01, L02, L03, L04, L05, L06}, \
	{ KC_NO, L10, L11, L12, L13, L14, L15, L16 }, \
	{ KC_NO, L20, L21, L22, L23, L24, L25, L26 }, \
	{ KC_NO, L30, L31, L32, L33, L34, L35, KC_NO }, \
	{ L40, L41, L42, L43, KC_NO, L44, KC_NO, KC_NO }, \
	{ R07, R06, R05, R04, R03, R02, R01, R00 }, \
	{ R16, KC_NO, R15, R14, R13, R12, R11, R10 }, \
	{ R25, KC_NO, R24, R23, R22, R21, KC_NO, R20 }, \
	{ R35, KC_NO, R34, R33, R32, R31, KC_NO, R30 }, \
	{ KC_NO, KC_NO, R44, KC_NO, R43, R42, R41, R40 } \
}
