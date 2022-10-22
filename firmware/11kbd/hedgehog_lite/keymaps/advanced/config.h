/* Copyright 2021 CMM.Studio Freather
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
 */

#pragma once

#include "config_common.h"

// Leader config
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 300

// undef fancy RGB modes
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE

// Fancy LED layer
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_STARTUP_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_LAYERS_RETAIN_VAL

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK

// Custom colors for the layers
#define MY_RED      0, 255, 230
#define MY_BLUE     170, 255, 230

#define MY_CHAT     64, 235, 230  // This is default color
#define MY_GREEN    106, 255, 230

#define MY_PURPLE   191, 255, 230
#define MY_CYAN     128, 255, 230
