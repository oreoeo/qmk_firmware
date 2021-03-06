/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

/* Define the pins in the keymap due to differences in wiring */
// Below are pin definitions for her "Stealth" build
// #define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 } 
// #define MATRIX_COL_PINS { B5, B4, E6, D7, C6 }

// Below are pin definitions for blue/grey build
/* { B6, B2, B3, B1, F7 } */
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 } 
/* #define MATRIX_COL_PINS { C6, D7, E6, B4, B5 } */ // LEFT
#define MATRIX_COL_PINS { B4, E6, D7, C6, D4 } // RIGHT

/* AUTO SHIFT SETTINGS */
#define AUTO_SHIFT_TIMEOUT 150

