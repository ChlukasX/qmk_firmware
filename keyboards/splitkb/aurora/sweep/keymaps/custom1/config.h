#pragma once

// Make Home Row Mods comfortable to type with
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

// OLED Screen settings
#define OLED_TIMEOUT 30000       // Screen turns off after 30 seconds of inactivity
#define OLED_BRIGHTNESS 120      // Moderate brightness to prevent burn-in

// Keep your existing RGB breathing setting from your old config
#ifdef RGBLIGHT_ENABLE
# define RGBLIGHT_EFFECT_BREATHING
#endif
