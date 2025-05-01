# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes
CAPS_WORD_ENABLE = no
#AUTO_SHIFT_ENABLE = yes
SRC += features/achordion.c

# https://docs.qmk.fm/#/custom_quantum_functions?id=deferred-execution
DEFERRED_EXEC_ENABLE = yes

# https://github.com/qmk/qmk_firmware/issues/19593#issuecomment-1387476045
# NO_USB_STARTUP_CHECK = yes
