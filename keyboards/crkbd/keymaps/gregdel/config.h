#pragma once

// Flash each half by specifying it's location in the EEPROM.
#define EE_HANDS

// Let's both halves detect which half is the master and which is the slave.
#define SPLIT_USB_DETECT

// Base tap/hold decision window for home-row mods in ms.
#define TAPPING_TERM 160

// Allow tap-then-hold repeat on tap-hold keys.
// Example: tap A, then quickly press-and-hold A => "aaaaaaaa".
#define QUICK_TAP_TERM 120

// During fast typing, resolve tap-hold keys as taps sooner.
#define FLOW_TAP_TERM 140

// Prefer same-hand rolling sequences as taps and opposite-hand chords as holds.
// This helps home-row mods behave naturally while typing fast.
#define CHORDAL_HOLD
