EEPROM_DRIVER = custom
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
SPACE_CADET_ENABLE = yes
TAP_DANCE_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
# Notes:
# 1. VIAL_ENABLE requires VIA_ENABLE to be 'yes' (per Vial's own
#    documentation).  VIA_ENABLE's own block in
#    builddefs/common_features.mk then makes the following mandatory:
#      BOOTMAGIC_ENABLE
#      DYNAMIC_KEYMAP_ENABLE
#      RAW_ENABLE
#      TRI_LAYER_ENABLE
#    Additionally:
#      SEND_STRING_ENABLE is 'yes' too, via builddefs/generic_features.mk,
#          though it is also indirectly 'yes' via DYNAMIC_KEYMAP_ENABLE's own
#          separate block in common_features.mk.
#      EEPROM_ENABLE is 'yes' and compiled in by default because EEPROM_DRIVER
#          set to 'custom' triggers OPT_DEFS += -DEEPROM_ENABLE.
# 2. The features block of ../../keyboard.json directly sets these to 'yes':
#      EXTRAKEY_ENABLE
#      RGB_MATRIX_ENABLE
#      MOUSEKEY_ENABLE
#    The latter cascades to enable:
#      MOUSE_ENABLE
#      SHARED_EP_ENABLE
# 3. The following are set in ../../rules.mk:
#      DEBOUNCE_TYPE is set to 'asym_eager_defer_pk'
#      NO_USB_STARTUP_CHECK is set to 'yes' reflecting
#          the Geonix's wireless (BLE and 2.4G) modes not guaranteeing a USB
#          connection at boot.
#      BLUETOOTH_CUSTOM set to 'yes' in ../../rules.mk.  Evidence suggests it
#          is redundant because no BLUE* feature appears in cflags.txt, and a
#          symbol dump of librdrcommon.a (with nm) shows self-contained BLE
#          handling.  (Refer the README.adoc for more details.)
# 4. COMBO_ENABLE, KEY_OVERRIDE_ENABLE, and TAP_DANCE_ENABLE could be omitted
#    because builddefs/build_vial.mk defaults those to 'yes', but they are
#    explicit here to be consistent with my other boards' rules.mk files
#    where they are overtly included similarly.  The same applies to
#    SPACE_CADET_ENABLE, though it is builddefs/generic_features.mk setting
#    it.
# These are 'no' (many by default, but are listed here anyway):
AUDIO_ENABLE = no
AUTO_SHIFT_ENABLE = no
CAPS_WORD_ENABLE = no
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
CUSTOM_MATRIX = no
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
# LTO, which theoretically would deliver a smaller firmware size, causes
# an ICF-pass compiler crash on the Geonix, so it cannot be enabled:
LTO_ENABLE = no
# Notes:
# 1. These builddefs/generic_features.mk _ENABLE-able features are default
#    'no'; most are n/a anyway: AUTOCORRECT, CONNECTION, CRC, DEFERRED_EXEC,
#    DIGITIZER, DIP_SWITCH, DYNAMIC_MACRO, HAPTIC, KEYCODE_STRING, KEY_LOCK,
#    MUSIC, OS_DETECTION, PROGRAMMABLE_BUTTON, SECURE, SEQUENCER, SWAP_HANDS,
#    VIRTSER, and WPM.
# 2. For NKRO_ENABLE, refer ../../keyboard.json.
# 3. SPLIT_KEYBOARD is n/a (for this single unit board).
# 4. BACKLIGHT_ENABLE is n/a given the per-key RGB Matrix.  Ironically, the
#    brightness key override only works with BL_INC/BL_DEC as its trigger,
#    despite this flag being off (see README for the documented anomaly).
# 5. USB_WAIT_FOR_ENUMERATION has no compiled-in default.
