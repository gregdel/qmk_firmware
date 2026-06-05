#pragma once

// Flash each half by specifying it's location in the EEPROM.
#define EE_HANDS

// Let's both halves detect which half is the master and which is the slave.
#define SPLIT_USB_DETECT

// Base tap/hold decision window for home-row mods in ms.
#define TAPPING_TERM 160

// Disable quick-tap auto-repeat behavior for tap-hold keys.
#define QUICK_TAP_TERM 0

// During fast typing, resolve tap-hold keys as taps sooner.
#define FLOW_TAP_TERM 140

// Prefer same-hand rolling sequences as taps and opposite-hand chords as holds.
// This helps home-row mods behave naturally while typing fast.
#define CHORDAL_HOLD
