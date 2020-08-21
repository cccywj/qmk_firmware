/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1156
#define DEVICE_VER      0x0200
#define MANUFACTURER    flxlb
#define PRODUCT         Zlant Pro
#define DESCRIPTION     almost ortho 60

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS { F6, F7, B5, B1, B3 }
#define MATRIX_COL_PINS { F4, F5, D1, D4, C6, D6, E6, B4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 0

#define SOFT_SERIAL_PIN D0

#define SELECT_SOFT_SERIAL_SPEED 1