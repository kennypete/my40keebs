AVR_USE_MINIMAL_PRINTF = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
SPACE_CADET_ENABLE = yes
TAP_DANCE_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
# Note: VIAL_ENABLE requires VIA_ENABLE to be 'yes' (per Vial's own
#       documentation).  VIA_ENABLE's own block in
#       builddefs/common_features.mk then makes the following mandatory:
#           DYNAMIC_KEYMAP_ENABLE
#           RAW_ENABLE
#           BOOTMAGIC_ENABLE
#           TRI_LAYER_ENABLE
#       Additionally, the following are 'yes' too, though indirectly:
#           SEND_STRING_ENABLE
#           DYNAMIC_KEYMAP_ENABLE
AUTO_SHIFT_ENABLE = no
CAPS_WORD_ENABLE = no
GRAVE_ESC_ENABLE = no
LAYER_LOCK_ENABLE = no
LTO_ENABLE = no
MAGIC_ENABLE = no
QMK_SETTINGS = no
REPEAT_KEY_ENABLE = no
RGBLIGHT_ENABLE = no
