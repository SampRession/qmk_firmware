/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

#define UNUSABLE_PINS \
    { GP1, GP3, GP4, GP6, GP8, GP10, GP14, GP16, GP18, GP20, GP22, GP24, GP25, GP26, GP27, GP28, GP29 }

// #define ROTATIONAL_TRANSFORM_ANGLE 0
#define POINTING_DEVICE_INVERT_Y

/* PMW3360 Settings */
#define PMW33XX_LIFTOFF_DISTANCE 0x00
#define PMW33XX_CS_PIN GP5
#define SPI_SCK_PIN GP2
#define SPI_MISO_PIN GP0
#define SPI_MOSI_PIN GP7

// Custom settings
#define PLOOPY_DPI_OPTIONS { 400, 800, 1200, 1600 }
#define PLOOPY_DPI_DEFAULT 1

#define PLOOPY_DRAGSCROLL_MOMENTARY
#define PLOOPY_DRAGSCROLL_INVERT
#define PLOOPY_DRAGSCROLL_DIVISOR_H 48.0
#define PLOOPY_DRAGSCROLL_DIVISOR_V 48.0
