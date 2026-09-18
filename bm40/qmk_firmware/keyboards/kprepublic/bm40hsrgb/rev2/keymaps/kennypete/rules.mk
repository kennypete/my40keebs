AVR_USE_MINIMAL_PRINTF = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
LTO_ENABLE = yes
SPACE_CADET_ENABLE = yes
TAP_DANCE_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
# Note: 
# 1. VIAL_ENABLE requires VIA_ENABLE to be 'yes' (per Vial's own
#    documentation).  VIA_ENABLE's own block in
#    builddefs/common_features.mk then makes the following mandatory:
#      BOOTMAGIC_ENABLE
#      DYNAMIC_KEYMAP_ENABLE
#      RAW_ENABLE
#      TRI_LAYER_ENABLE
#    Additionally, the following is 'yes' too, though indirectly
#    (via DYNAMIC_KEYMAP_ENABLE's own separate block in the same file):
#      SEND_STRING_ENABLE
# 2. keyboard.json effectively sets EXTRAKEY_ENABLE = yes and
#    MOUSEKEY_ENABLE = yes too.
#
# These are 'no' (many by default, but are listed here anyway):
AUDIO_ENABLE = no
AUTO_SHIFT_ENABLE = no
CAPS_WORD_ENABLE = no
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
CUSTOM_MATRIX = no
DEFERRED_EXEC_ENABLE = no
DYNAMIC_TAPPING_TERM_ENABLE = no
GRAVE_ESC_ENABLE = no
LAYER_LOCK_ENABLE = no
LEADER_ENABLE = no
MAGIC_ENABLE = no
MIDI_ENABLE = no
QMK_SETTINGS = no
REPEAT_KEY_ENABLE = no
RGBLIGHT_ENABLE = no
UNICODEMAP_ENABLE = no
UNICODE_COMMON = no
UNICODE_ENABLE = no
# Notes:
# 1. NKRO_ENABLE = no is delivered in keyboard.json.
# 2. BLUETOOTH_ENABLE, NO_USB_STARTUP_CHECK, and SPLIT_KEYBOARD are
#    all n/a for this non BT, USB, single unit board.
# 3. DEBOUNCE_TYPE defaults to 'sym_defer_g' (builddefs/common_features.mk);
#    and is not overridden here.
# 4. BACKLIGHT_ENABLE is n/a given the per-key RGB Matrix.  Ironically, the
#    brightness key override only works with BL_INC/BL_DEC as its trigger,
#    despite this flag being off (see README for the documented anomaly).
# 5. USB_WAIT_FOR_ENUMERATION has no compiled-in default.
