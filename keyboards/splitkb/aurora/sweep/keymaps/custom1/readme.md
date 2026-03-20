# Custom1 Layout for Aurora Sweep

A heavily optimized 34-key layout designed for programming, featuring Home Row Mods, an integrated number pad, and easy access to German Umlaute.

## Layers

- **Layer 0 (Base):** QWERTY. Holding A, S, D, F (and J, K, L, ;) activates GUI, Alt, Shift, and Control.
- **Layer 1 (Nav/Num):** Accessed by holding the Left Space thumb. Contains numbers on the top row and navigation (Arrows, Home, End) on the right hand.
- **Layer 2 (Sym):** Accessed by holding the Right Enter thumb. Left hand contains programming brackets/symbols. Right hand contains German Umlaute (ä, ö, ü, ß) via AltGr bindings (requires US-International or EurKEY OS layout).
- **Layer 3 (Media/PC):** Accessed by holding the Left Tab thumb. Controls volume, media playback, brightness, and sleep/wake.

## OLED Support
The OLED screen is enabled and will automatically display your current layer and lock statuses. It will time out after 30 seconds of inactivity to save power.

## Compiling
To build this keymap, run:
`qmk compile -kb splitkb/aurora/sweep -km custom1`
