/* Copyright 2021 QMK
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

#define VIAL_KEYBOARD_UID { 0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6, 0x11, 0x22 }

// unlock combination
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

// number of layers, macros, combos, and tap dance entries
#define DYNAMIC_KEYMAP_LAYER_COUNT 7
#define DYNAMIC_KEYMAP_MACRO_COUNT 3
#define VIAL_COMBO_ENTRIES 6
#define VIAL_KEY_OVERRIDE_ENTRIES 6
#define VIAL_TAP_DANCE_ENTRIES 9

// no one shot mod/layer keycodes are used anywhere in my keymaps/Vial so it
// is disabled - https://docs.qmk.fm/squeezing_avr - the rest of the config.h
// items in there are either off natively or have been accounted for
#define NO_ACTION_ONESHOT

// settings mouse keys
#define MOUSEKEY_DELAY             15  // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL          33  // Time between cursor movements (ms)
#define MOUSEKEY_MOVE_DELTA        6   // Step size
#define MOUSEKEY_MAX_SPEED         6   // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX       33  // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY       8   // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL    80  // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED   8   // Maximum scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40  // Time until maximum scroll speed is reached

// Chosfox Geonix Rev.2.5 specific settings
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR  1151
#define EEPROM_SIZE 1152

#define FEE_PAGE_SIZE (0x200)
#define FEE_PAGE_COUNT (8)

#define FEE_PAGE_BASE_ADDRESS (0x1F000)
#define FEE_MCU_FLASH_SIZE (0x1000)

#define EECONFIG_USER_DATA_SIZE 4

#define EECONFIG_KB_DATA_SIZE 1

#define TRANSIENT_EEPROM_SIZE 4096

