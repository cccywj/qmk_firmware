/* Copyright 2020 fluxlab
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here
#undef MATRIX_ROWS
#define MATRIX_ROWS 4

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { D2, F4, F6, F5 }

#define RGBALL

#undef RGB_DI_PIN
#undef DRIVER_LED_TOTAL
#undef RGBLED_NUM

#define RGB_DI_PIN B3
#define DRIVER_LED_TOTAL 16
#define RGBLED_NUM 16

#define RGB_MATRIX_KEYPRESSES