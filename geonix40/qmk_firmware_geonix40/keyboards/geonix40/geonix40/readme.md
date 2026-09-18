# Chosfox Geonix Rev.2.5

A 47-key wireless 40%-style keyboard (Kailh Choc V2, low-profile), built on the ES32FS026 microcontroller.

* Base identifier (vendor): `FS026+91680-Xuesi Electronics-Geonix41-Tri-mode-3.0`
* Backlight: WS2812
* Logo LED: WS2812
* VID/PID: `0x36B0` / `0x313F` (vendor documentation mismatch against `keyboard.json`, which currently states `0x313B`; confirm against actual device descriptor before treating either as authoritative)

## Firmware revision history

Translated and consolidated from the vendor's original `修改说明.md` ("Modification notes").

| Version | Checksum | Date | Changes |
|---|---|---|---|
| V0100 | 6CD9 | 2026-01-08 | Initial build. Requires pairing with a new RF dongle/receiver. |
| V0101 | F0ED | 2026-03-04 | Bluetooth and wired device names both changed to "GEONIX REV.2.5 1U". Win/Mac system-switch indicator repositioned: `FN+U` switches to Windows mode (U key lights white); `FN+Y` switches to Mac mode (Y key lights white); while FN is held, whichever of U/Y matches the current OS mode stays lit white as a status indicator. `FN+ENTER` lighting-test mode removed. The 8 ambience LEDs' effects and on/off state unified with the main key-lighting effect rather than being controlled separately. While charging, the FN key lights red for 10 seconds, then reverts to normal. |
| V0102 | 6A6D | 2026-03-16 | Ambience lighting effects reverted to independent control (no longer follows key-lighting effect). `FN+ENTER` repurposed to turn ambience lighting off. |
| V0103 | 0D65 | 2026-03-24 | `FN+ENTER` repurposed again — now cycles through ambience lighting effects. |
| V0104 | 15E0 | 2026-05-16 | Vial support added. |
| V0105 | D939 | 2026-05-18 | JSON file modified. |

Every version above requires pairing with a new RF dongle/receiver (a constant vendor note across all releases, not version-specific).

## Notes

- All versions in this history use the name "Geonix41" internally, not "40"; whether this refers to the same physical PCB as "GEONIX REV.2.5", or a closely related variant from the same vendor family, is unclear.  (The readme/documentation included a lot of n/a content.)
- The Windows/Mac indicator is n/a in the `kennypete` build (i.e., it is removed).
