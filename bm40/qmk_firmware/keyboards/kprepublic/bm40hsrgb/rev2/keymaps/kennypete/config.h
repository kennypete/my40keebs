/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x7F, 0x68, 0xF0, 0xAB, 0x45, 0xB5, 0xC7, 0xC2}

// unlock combination
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

// number of layers, combos, macros, tap dance entries
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

