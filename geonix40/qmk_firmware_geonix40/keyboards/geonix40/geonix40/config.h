/* Copyright 2023 Finalkey
 * Copyright 2023 LiWenLiu <https://github.com/LiuLiuQMK>
 * Copyright 2026 Peter Kenny <https://github.com/kennypete>
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

/* MCU/electrical-specific matrix scanning behaviour */
#define MATRIX_UNSELECT_DRIVE_HIGH
/* Disable wait-for-interrupt idle sleep on the Cortex-M core */
#define CORTEX_ENABLE_WFI_IDLE FALSE
/* Ensure board jumps to bootloader when the RESET keycode is pressed */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE
/* RGB_* settings */
#define RGB_MATRIX_LED_COUNT 76             // Total addressable LEDs
#define RGB_MATRIX_KEYPRESSES               // RGB responds to key press events
#define RGB_MATRIX_KEYRELEASES              // RGB responds to key release events
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS      // Enable framebuffer-based events (needed?)
#define RGB_DISABLE_AFTER_TIMEOUT 0         // No auto timeout
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 144   // Maximum brightness, obviously
#define RGB_MATRIX_SPD_STEP   64            // Speed step increment value
#define RGB_MATRIX_DEFAULT_VAL 128          // Default brightness on boot
#define RGB_MATRIX_SLEEP                    // Dims/sleeps RGB matrix on host suspend

