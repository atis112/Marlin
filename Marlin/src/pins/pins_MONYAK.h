/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Pin assignments for my Arduino DUE based controller
 *
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "Monyak"
#endif

// Limit switches
#define X_MIN_PIN			65
#define Y_MIN_PIN			64
#define Z_MIN_PIN			63

// Z Probe (when not Z_MIN_PIN)
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN	63
#endif

// Steppers
#define X_STEP_PIN			7
#define X_DIR_PIN			6
#define X_ENABLE_PIN		5

#define Y_STEP_PIN			4
#define Y_DIR_PIN			3
#define Y_ENABLE_PIN		2

#define Z_STEP_PIN			16
#define Z_DIR_PIN			14
#define Z_ENABLE_PIN		15

#define Z2_STEP_PIN			17
#define Z2_DIR_PIN			18
#define Z2_ENABLE_PIN		19

#define E0_STEP_PIN			68
#define E0_DIR_PIN			67
#define E0_ENABLE_PIN		66

// Temperature sensors
#define TEMP_BED_PIN		3		//Analog input
#define TEMP_0_PIN			2		//Analog input

// Heaters
#define HEATER_BED_PIN		69
#define HEATER_0_PIN		29

// Misc. Functions
//
#define SDSS				8		//not used
