/* Copyright 2020 tominabox1
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
 *
 * Modifications: Copyright 2026 Peter Kenny
 * The layout keymap is reworked, layers are renamed, comments re-worked, and
 * layouts (aside from much of _BASE) are modified significantly.
 * The PER-KEY COLOURS section is new.
 */

#include QMK_KEYBOARD_H

/* *****************************************************************
 *       DEFAULT LAYERS (WHICH ARE OVERWRITEN WITH VIAL LATER)
 *  These could be expanded to make Vial redundant.  However, since
 *  some things are much easier to address interactively in Vial,
 *  what has been done here is to only make it aligned-yet-minimal,
 *  for the state the board is in temporarily after flashing.
 * *****************************************************************
*/

enum layers {
  _BASE,
  _SYMBOLS,
  _NUMBERS,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,-----------------------------------------------------------------------------------------------------------.
 * |  Tab   |    Q   |    W   |    E   |    R   |    T   |    Y   |    U   |    I   |    O   |    P   |  Bksp  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Esc   |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |    ;   |   "    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Shift |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |    ,   |    .   |    /   | Enter  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |  Gui   |  Alt   |  BLTog |  Lower |     Space       |  Raise |  Left  |  Down  |   Up   |  Right |
 * `-----------------------------------------------------------------------------------------------------------'
 */

[_BASE] = LAYOUT_ortho_4x12_1x2uC(
    KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_ESC  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
    KC_LCTL , KC_LGUI, KC_LALT, RGB_TOG, MO(1)  , KC_SPC          , MO(2)  , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
),

/* Symbols
 * ,-----------------------------------------------------------------------------------------------------------.
 * |    ~   |    !   |    @   |    #   |    $   |    %   |    ^   |    &   |    *   |   (    |    )   |  Del   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |   F1   |   F2   |   F3   |   F4   |   F5   |  Left  |  Down  |   Up   |  Right |    _   |   +    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Shift |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |   {    |   }    |    |   |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |        |   Alt  |        | ______ |                 |  Raise |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_SYMBOLS] = LAYOUT_ortho_4x12_1x2uC(
    KC_TILD , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
    KC_NO   , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_UNDS, KC_PLUS,
    KC_LSFT , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_LCBR, KC_RCBR, KC_PIPE, KC_NO  ,
    KC_LCTL , KC_NO  , KC_LALT, KC_NO  , KC_TRNS, KC_NO           , MO(3)  , KC_NO  , KC_NO  , KC_NO  , KC_NO
),

/* Numbers
 * ,-----------------------------------------------------------------------------------------------------------.
 * |    `   |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |  Del   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |  Left  |  Down  |   Up   |  Right |    -   |   =    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Shift |        |        |        |        |        |        |        |   [    |    ]   |    \   |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |        |   Alt  |        | Lower  |                 | ______ |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_NUMBERS] = LAYOUT_ortho_4x12_1x2uC(
    KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL ,
    KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_MINS, KC_EQL ,
    KC_LSFT , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_LBRC, KC_RBRC, KC_BSLS, KC_NO  ,
    KC_LCTL , KC_NO  , KC_LALT, KC_NO  , MO(3)  , KC_NO           , KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO
),

/* Adjust (Lower + Raise)
 * [QK_BOOT only]
 * ,-----------------------------------------------------------------------------------------------------------.
 * |        |        |        |        | BOOT   |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | ______ |                 | ______ |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12_1x2uC(
     KC_NO  , KC_NO  , KC_NO  , KC_NO  , QK_BOOT, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_TRNS, KC_NO           , KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO
)

};

// ***************************************************************************
// ***                           PER KEY COLOURS                           ***
// ***************************************************************************

#define RC(r, c) (((r) << 4) | (c))

static void apply_hsv_table(const uint8_t (*table)[3], uint8_t count) {
    uint8_t val = rgb_matrix_get_val();  // live global brightness

    for (uint8_t i = 0; i < count; i++) {
        uint8_t rc  = pgm_read_byte(&table[i][0]);
        uint8_t h   = pgm_read_byte(&table[i][1]);
        uint8_t s   = pgm_read_byte(&table[i][2]);
        uint8_t row = rc >> 4;
        uint8_t col = rc & 0x0F;

        HSV hsv = {h, s, val};
        RGB rgb = hsv_to_rgb(hsv);

        uint8_t led_index = g_led_config.matrix_co[row][col];
        if (led_index != NO_LED) {
            rgb_matrix_set_color(led_index, rgb.r, rgb.g, rgb.b);
        }
    }
}

static void apply_off_table(const uint8_t *table, uint8_t count) {
    for (uint8_t i = 0; i < count; i++) {
        uint8_t rc  = pgm_read_byte(&table[i]);
        uint8_t row = rc >> 4;
        uint8_t col = rc & 0x0F;
        uint8_t led_index = g_led_config.matrix_co[row][col];
        if (led_index != NO_LED) {
            rgb_matrix_set_color(led_index, RGB_OFF);
        }
    }
}

// Hue, Sat pairs for colour names
//
// QMK's RGB Matrix works in HSV internally, scaled 0-255 for all three of
// H/S/V (not the usual 0-360 degrees / 0-100% you'd see in a colour picker).
// Only H and S are stored here; V comes from the current brightness at
// render time, which is what makes these colours respond to Bright +/-.
//
// RGB->HSV conversion, worked for all three possible "max channel" cases
// (the hue formula changes depending on which of R/G/B is largest):
//
// R is max -- "MAGENTA" RGB (255, 0, 126):
//   max=255 (Red), min=0, delta=255
//   S = 255 * (delta/max) = 255 * (255/255) = 255
//   H = 60 * ((G-B)/delta) = 60 * ((0-126)/255) = -29.65 deg
//   Negative result -- wrap by adding 360: -29.65 + 360 = 330.35 deg
//   H rescaled to QMK's 0-255: round(330.35 * 255/360) = 234
//   -> HS_MAGENTA = 234, 255
//
// G is max -- "GREEN" RGB (0, 255, 0):
//   max=255 (Green), min=0, delta=255
//   S = 255 * (delta/max) = 255 * (255/255) = 255
//   H = 60 * (((B-R)/delta) + 2) = 60 * (((0-0)/255) + 2) = 120 deg
//   H rescaled to QMK's 0-255: round(120 * 255/360) = 85
//   -> HS_GREEN = 85, 255
//
// B is max -- "ROYAL" RGB (83, 184, 255):
//   max=255 (Blue), min=83, delta=172              <- not fully saturated;
//                                                      min isn't 0 here
//   S = 255 * (delta/max) = 255 * (172/255) = 172
//   H = 60 * (((R-G)/delta) + 4) = 60 * (((83-184)/172) + 4) = 204.77 deg
//   H rescaled to QMK's 0-255: round(204.77 * 255/360) = 145
//   -> HS_ROYAL = 145, 172
//
// V (brightness) is always just the max channel itself, unscaled -- but it's
// deliberately not stored in these pairs, since it comes live from the
// board's current brightness setting instead (see apply_hsv_table above).
//
// Hue, Sat pairs for the built-in RGB_* colours (quantum/colors.h) with
// lime bespoke to ensure it is visually distinct and not quasi white
#define HS_WHITE     0,   0
#define HS_ROSE      0,   90
#define HS_RED       0,   255
#define HS_ORANGE    24,  150
#define HS_YELLOW    42,  255
#define HS_LIME      68,  167
#define HS_GREEN     85,  255
#define HS_EMERALD   107, 255
#define HS_CYAN      128, 255
#define HS_ROYAL     145, 172
#define HS_BLUE      170, 255
#define HS_PURPLE    190, 172
#define HS_PINK      212, 255
#define HS_MAGENTA   234, 255

bool rgb_matrix_indicators_user(void) {
    uint8_t layer = get_highest_layer(layer_state);

    // Special treatment of layer three, which has only the QK_BOOT key
    // (keeping fixed-brightness deliberately as a safety indicator, not part
    // of the colour scheme).  The QK_BOOT key and the Lower/Raise keys are
    // all made RGB_RED so that it is really clear we are in a danger zone.
    if (layer == 3) {
        rgb_matrix_set_color_all(RGB_OFF);

        uint8_t led_index = g_led_config.matrix_co[0][4];   // QK_BOOT
        if (led_index != NO_LED) {
            rgb_matrix_set_color(led_index, RGB_RED);
        }

        led_index = g_led_config.matrix_co[3][4];            // Lower, is being held
        if (led_index != NO_LED) {
            rgb_matrix_set_color(led_index, RGB_RED);
        }

        led_index = g_led_config.matrix_co[3][7];            // Raise, is being held
        if (led_index != NO_LED) {
            rgb_matrix_set_color(led_index, RGB_RED);
        }

        return false;
    }

    // Base layer
    if (layer == 0) {
        static const uint8_t PROGMEM base_hues[][3] = {
            // Default for alpha characters and punctuation so that a couple
            // of RGB modes (Cycle Left Right and Hue Pendulum) can be used
            // Row 0 just ` as BLUE and Backspace RED
            {RC(0,0), HS_YELLOW},   // Tab
            {RC(0,11), HS_RED},     // Bksp
                                    // Other 1-10 Q W E R T Y U I O P default
            // Row 1
            {RC(1,0), HS_GREEN},    // Esc
            {RC(1,4), HS_YELLOW},   // F
            {RC(1,7), HS_YELLOW},   // J
                                    // Other 1-3,5,6,8-11 A S D G H K L ; ' default
            // Row 2
            {RC(2,0), HS_ROSE},     // Sft
                                    // 1-10 Z X C V B N M , . / default
            {RC(2,11), HS_ROSE},    // RS Enter
            // Row 3
            {RC(3,0), HS_ROSE},     // Ctl
            {RC(3,1), HS_PURPLE},   // TD(3) - Gui [Hold: Gui; Double Tap: Gui+E]
            {RC(3,2), HS_MAGENTA},  // Alt
            {RC(3,3), HS_BLUE},     // TD(2) - TO(0) [Double Tap: TO(4); Hold: TO(5)]
            {RC(3,4), HS_ROSE},     // Lower
                                    // (3,5) space default
                                    // (3,6) is n/a for this 2U board
            {RC(3,7), HS_ROSE},     // Raise
            {RC(3,8), HS_ROYAL},    // Home [Hold: Meh (Ctl + Sft + Alt)]
            {RC(3,9), HS_BLUE},     // Mouse Wheel Down [Hold: Hyper (Ctl + Sft + Alt + Gui)]
            {RC(3,10), HS_PURPLE},  // Mouse Wheel Up [Hold: Gui]
            {RC(3,11), HS_PURPLE},  // End [Hold: Ctl]
        };
        apply_hsv_table(base_hues, ARRAY_SIZE(base_hues));
        return false;
    }

    // Lower layer
    if (layer == 1) {
        static const uint8_t PROGMEM lower_hues[][3] = {
            // Row 0
            {RC(0,0), HS_ROYAL},    // ~
            {RC(0,1), HS_ROYAL},    // !
            {RC(0,2), HS_ROYAL},    // @
            {RC(0,3), HS_ROYAL},    // #
            {RC(0,4), HS_ROYAL},    // $
            {RC(0,5), HS_ROYAL},    // %
            {RC(0,6), HS_ROYAL},    // ^
            {RC(0,7), HS_ROYAL},    // &
            {RC(0,8), HS_ROYAL},    // *
            {RC(0,9), HS_ROYAL},    // (
            {RC(0,10), HS_ROYAL},   // )
            {RC(0,11), HS_RED},     // Delete
            // Row 1
            {RC(1,0), HS_ROSE},     // TD(4) - NO [Double Tap: Caps Lock]
            {RC(1,1), HS_EMERALD},  // F1
            {RC(1,2), HS_EMERALD},  // F2
            {RC(1,3), HS_EMERALD},  // F3
            {RC(1,4), HS_EMERALD},  // F4
            {RC(1,5), HS_EMERALD},  // F5
            {RC(1,6), HS_YELLOW},   // Left
            {RC(1,7), HS_YELLOW},   // Down
            {RC(1,8), HS_YELLOW},   // Up
            {RC(1,9), HS_YELLOW},   // Right
            {RC(1,10), HS_ROYAL},   // _
            {RC(1,11), HS_ROYAL},   // +
            // Row 2
            {RC(2,0), HS_ROSE},     // TD(5) - Sft [Hold: Sft, Double Tap: Num Lock]
            {RC(2,1), HS_EMERALD},  // F6
            {RC(2,2), HS_EMERALD},  // F7
            {RC(2,3), HS_EMERALD},  // F8
            {RC(2,4), HS_EMERALD},  // F9
            {RC(2,5), HS_EMERALD},  // F10
            {RC(2,6), HS_EMERALD},  // F11
            {RC(2,7), HS_EMERALD},  // F12
            {RC(2,8), HS_ROYAL},    // {
            {RC(2,9), HS_ROYAL},    // }
            {RC(2,10), HS_ROYAL},   // |
            {RC(2,11), HS_ROSE},    // RS Enter
            // Row 3
            {RC(3,0), HS_ROSE},     // TD(6) - Ctl [Hold: Ctl, Double Tap: Scroll Lock]
            {RC(3,1), HS_PURPLE},   // Menu [Hold: Gui]
            {RC(3,2), HS_MAGENTA},  // Insert [Hold: Alt]
            {RC(3,5), HS_ROYAL},    // Ctl-Sft-Space
                                    // (3,6) is n/a for this 2U board
            {RC(3,7), HS_ROSE},     // MO(3)
            {RC(3,8), HS_PURPLE},   // Home
            {RC(3,9), HS_ROSE},     // TD(0) [Tap/Hold: Mouse Wheel Down; Double Tap: Page Down]
            {RC(3,10), HS_ROSE},    // TD(1) [Tap/Hold: Mouse Wheel Up; Double Tap: Page Up]
            {RC(3,11), HS_PURPLE},  // End [Hold: Ctl]
        };
        static const uint8_t PROGMEM lower_off[] = {
            RC(3,3),                // Inactive 'QMK' key
            RC(3,4),                // Lower itself is currently held
        };
        apply_hsv_table(lower_hues, ARRAY_SIZE(lower_hues));
        apply_off_table(lower_off, ARRAY_SIZE(lower_off));
        return false;
    }

    // Raise layer
    if (layer == 2) {
        static const uint8_t PROGMEM raise_hues[][3] = {
            // Row 0
            {RC(0,0), HS_BLUE},     // `
            {RC(0,1), HS_BLUE},     // 1
            {RC(0,2), HS_BLUE},     // 2
            {RC(0,3), HS_BLUE},     // 3
            {RC(0,4), HS_BLUE},     // 4
            {RC(0,5), HS_BLUE},     // 5
            {RC(0,6), HS_BLUE},     // 6
            {RC(0,7), HS_BLUE},     // 7
            {RC(0,8), HS_BLUE},     // 8
            {RC(0,9), HS_BLUE},     // 9
            {RC(0,10), HS_BLUE},    // 0
            {RC(0,11), HS_RED},     // Del
            // Row 1
            {RC(1,0), HS_ROSE},     // TD(4) NO [Double Tap: Caps Lock]
            {RC(1,1), HS_EMERALD},  // Ctl-F1
            {RC(1,2), HS_EMERALD},  // Ctl-F2
            {RC(1,3), HS_EMERALD},  // Ctl-F3
            {RC(1,4), HS_EMERALD},  // Ctl-F4
            {RC(1,5), HS_EMERALD},  // Ctl-F5
            {RC(1,6), HS_YELLOW},   // Left
            {RC(1,7), HS_YELLOW},   // Down
            {RC(1,8), HS_YELLOW},   // Up
            {RC(1,9), HS_YELLOW},   // Right
            {RC(1,10), HS_BLUE},    // -
            {RC(1,11), HS_BLUE},    // =
            // Row 2
            {RC(2,0), HS_ROSE},     // TD(5) - Sft [Hold: Sft, Double Tap: Num Lock]
            {RC(2,1), HS_EMERALD},  // Ctl-F6
            {RC(2,2), HS_EMERALD},  // Ctl-F7
            {RC(2,3), HS_EMERALD},  // Ctl-F8
            {RC(2,4), HS_EMERALD},  // Ctl-F9
            {RC(2,5), HS_EMERALD},  // Ctl-F10
            {RC(2,6), HS_EMERALD},  // Ctl-F11
            {RC(2,7), HS_EMERALD},  // Ctl-F12
            {RC(2,8), HS_BLUE},     // [
            {RC(2,9), HS_BLUE},     // ]
            {RC(2,10), HS_BLUE},    // Reverse solidus
            {RC(2,11), HS_ROSE},    // RS Enter
            // Row 3
            {RC(3,0), HS_ROSE},     // TD(6) - Ctl [Hold: Ctl, Double Tap: Scroll Lock]
            {RC(3,1), HS_PURPLE},   // Menu [Hold: Gui]
            {RC(3,2), HS_MAGENTA},  // Insert [Hold: Alt]
            {RC(3,4), HS_ROSE},     // MO(3)
            {RC(3,5), HS_EMERALD},  // Ctl-Sft-F12
                                    // (3,6) is n/a for this 2U board
            {RC(3,8), HS_PURPLE},   // Home
            {RC(3,9), HS_ROSE},     // TD(0) [Tap/Hold: Mouse Wheel Down; Double Tap: Page Down]
            {RC(3,10), HS_ROSE},    // TD(1) [Tap/Hold: Mouse Wheel Up; Double Tap: Page Up]
            {RC(3,11), HS_PURPLE},  // Ctl [Tap: End]
        };
        static const uint8_t PROGMEM raise_off[] = {
            RC(3,3),                // Inactive 'QMK' key
            RC(3,7),                // Raise itself is currently held
        };
        apply_hsv_table(raise_hues, ARRAY_SIZE(raise_hues));
        apply_off_table(raise_off, ARRAY_SIZE(raise_off));
        return false;
    }

    // Numpad layer
    if (layer == 4) {
        static const uint8_t PROGMEM numpad_hues[][3] = {
            // Row 0
            {RC(0,0), HS_YELLOW},   // Tab
            {RC(0,2), HS_YELLOW},   // Up
            {RC(0,5), HS_ROSE},     // KP_SLASH
            {RC(0,6), HS_CYAN},     // KP_7
            {RC(0,7), HS_CYAN},     // KP_8
            {RC(0,8), HS_CYAN},     // KP_9
            {RC(0,9), HS_ROSE},     // KP_MINUS
            {RC(0,11), HS_RED},     // Bksp
            // Row 1
            {RC(1,0), HS_GREEN},    // Esc
            {RC(1,1), HS_YELLOW},   // Left
            {RC(1,2), HS_YELLOW},   // Down
            {RC(1,3), HS_YELLOW},   // Right
            {RC(1,5), HS_LIME},     // KP_ASTERISK
            {RC(1,6), HS_CYAN},     // KP_4
            {RC(1,7), HS_CYAN},     // KP_5
            {RC(1,8), HS_CYAN},     // KP_6
            {RC(1,9), HS_LIME},     // KP_PLUS
            {RC(1,11), HS_RED},     // Del
            // Row 2
            {RC(2,0), HS_ROSE},     // Sft [Tap: Num Lock]
            {RC(2,5), HS_WHITE},    // KP_EQUAL
            {RC(2,6), HS_CYAN},     // KP_1
            {RC(2,7), HS_CYAN},     // KP_2
            {RC(2,8), HS_CYAN},     // KP_3
            {RC(2,9), HS_WHITE},    // KP_COMMA
            {RC(2,11), HS_ROSE},    // RS Enter
            // Row 3
            {RC(3,0), HS_ROSE},     // Scroll Lock [Hold: Ctl]
            {RC(3,3), HS_BLUE},     // TD(2) - TO(0) [Double Tap: TO(4); Hold: TO(5)]
            {RC(3,5), HS_EMERALD},  // M0 (KP_0 KP_0)
                                    // (3,6) is n/a for this 2U board
            {RC(3,7), HS_EMERALD},  // KP_0
            {RC(3,8), HS_EMERALD},  // KP_DOT
            {RC(3,9), HS_ROSE},     // KP_ENTER
            {RC(3,11), HS_ROSE},    // Ctrl
        };
        static const uint8_t PROGMEM numpad_off[] = {
            RC(0,1),                // Unassigned / Separator
            RC(0,3),                // Unassigned / Separator
            RC(0,4),                // Unassigned / Separator
            RC(0,10),               // Unassigned / Separator
            RC(1,4),                // Unassigned / Separator
            RC(1,10),               // Unassigned / Separator
            RC(2,1),                // Unassigned / Separator
            RC(2,2),                // Unassigned / Separator
            RC(2,3),                // Unassigned / Separator
            RC(2,4),                // Unassigned / Separator
            RC(2,10),               // Unassigned / Separator
            RC(3,1),                // Unassigned / Separator
            RC(3,2),                // Unassigned / Separator
            RC(3,4),                // Unassigned / Separator
            RC(3,10),               // Unassigned / Separator
        };
        apply_hsv_table(numpad_hues, ARRAY_SIZE(numpad_hues));
        apply_off_table(numpad_off, ARRAY_SIZE(numpad_off));
        return false;
    }

    // Adjust layer
    if (layer == 5) {
        static const uint8_t PROGMEM extras_hues[][3] = {
            // Row 0
            {RC(0,10), HS_WHITE},   // Pause
            {RC(0,11), HS_ORANGE},  // RGB Toggle
            // Row 1
            {RC(1,0), HS_GREEN},    // Escape
            {RC(1,2), HS_WHITE},    // Print Screen
            {RC(1,6), HS_PINK},     // Mouse Move Left
            {RC(1,7), HS_PINK},     // Mouse Move Down
            {RC(1,8), HS_PINK},     // Mouse Move Up
            {RC(1,9), HS_PINK},     // Mouse Move Right
            // Row 2
            {RC(2,0), HS_ROSE},     // Shift
            {RC(2,4), HS_CYAN},     // Vol+
            {RC(2,5), HS_ORANGE},   // Bright+
            {RC(2,6), HS_PINK},     // Mouse Button 3
            {RC(2,7), HS_PINK},     // Mouse Button 2
            {RC(2,11), HS_ROSE},    // RS Enter
            // Row 3
            {RC(3,0), HS_ROSE},     // Ctl
            {RC(3,1), HS_PURPLE},   // Gui
            {RC(3,2), HS_MAGENTA},  // Alt
            {RC(3,3), HS_BLUE},     // TD(2) - TO(0) [Double Tap: TO(4); Hold: TO(5)]
            {RC(3,5), HS_PINK},     // Mouse Button 1
                                    // (3,6) is n/a for this 2U board
            {RC(3,8), HS_ROSE},     // Mouse Wheel Left
            {RC(3,9), HS_ROSE},     // TD(0) [Tap/Hold: Mouse Wheel Down; Double Tap: Page Down]
            {RC(3,10), HS_ROSE},    // TD(1) [Tap/Hold: Mouse Wheel Up; Double Tap: Page Up]
            {RC(3,11), HS_ROSE},    // Mouse Wheel Right
        };
        static const uint8_t PROGMEM extras_off[] = {
            RC(0,0),   // Unassigned
            RC(0,1),   // Unassigned
            RC(0,2),   // Unassigned
            RC(0,3),   // Unassigned
            RC(0,4),   // Unassigned
            RC(0,5),   // Unassigned
            RC(0,6),   // Unassigned
            RC(0,7),   // Unassigned
            RC(0,8),   // Unassigned
            RC(0,9),   // Unassigned
            RC(1,1),   // Unassigned
            RC(1,3),   // Unassigned
            RC(1,4),   // Unassigned
            RC(1,5),   // Unassigned
            RC(1,10),  // Unassigned
            RC(1,11),  // Unassigned
            RC(2,1),   // Unassigned
            RC(2,2),   // Unassigned
            RC(2,3),   // Unassigned
            RC(2,8),   // Unassigned
            RC(2,9),   // Unassigned
            RC(2,10),  // Unassigned
            RC(3,4),   // Unassigned
            RC(3,7),   // Unassigned
        };
        apply_hsv_table(extras_hues, ARRAY_SIZE(extras_hues));
        apply_off_table(extras_off, ARRAY_SIZE(extras_off));
        return false;
    }

    return true;
}
