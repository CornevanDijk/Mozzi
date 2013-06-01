#ifndef BAMBOO_00_4096_H_
#define BAMBOO_00_4096_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include <avr/pgmspace.h>

#define BAMBOO_00_4096_NUM_CELLS 4096
#define BAMBOO_00_4096_SAMPLERATE 16384

const char __attribute__((progmem)) BAMBOO_00_4096_DATA []  = {-1, 0, -1, 0, -1, 0, 1, 0, 0, 0, -1,
                1, 0, 0, 2, -2, -21, -66, -98, -56, 37, 60, 1, -31, 7, 72, 95, 90, 63, -1, -44,
                -72, -89, -28, 59, 92, 60, -12, -86, -125, -102, -32, 66, 123, 69, -19, -53,
                -61, -58, -20, 31, 74, 72, 6, -58, -65, -38, -9, 36, 69, 63, 22, -47, -78, -40,
                7, 36, 55, 55, 28, -22, -50, -15, 21, 21, 12, 10, 20, 12, -31, -49, -27, 0, 12,
                17, 18, 12, -16, -46, -40, -9, 9, 8, 3, 14, 9, -24, -37, -18, 2, 15, 20, 25, 28,
                4, -31, -38, -13, 19, 35, 34, 25, 4, -24, -32, -14, 21, 38, 27, 12, -3, -30,
                -48, -30, 7, 30, 28, 6, -14, -32, -41, -28, 5, 31, 28, 0, -28, -32, -22, -10, 3,
                20, 21, 2, -13, -9, 1, 5, 7, 12, 15, 10, 0, -1, 9, 11, 5, -1, 3, 13, 12, 5, 0,
                -1, -4, -10, -9, 2, 8, 5, 0, -8, -18, -24, -19, 0, 14, 10, -11, -28, -27, -16,
                -3, 8, 19, 15, 0, -14, -14, -4, 6, 14, 19, 16, 2, -14, -12, 0, 13, 20, 21, 16,
                4, -3, -5, 0, 7, 9, 2, -6, -9, -10, -10, -5, -1, -3, -8, -12, -13, -9, -8, -7,
                -4, -4, -7, -7, -4, 0, -1, -6, -8, -4, 4, 6, 6, 8, 6, 2, 2, 6, 10, 11, 14, 14,
                10, 3, -1, 0, 6, 9, 6, -1, -6, -9, -11, -9, -2, 1, 1, -2, -10, -14, -14, -12,
                -6, 0, 0, -6, -14, -16, -10, -1, 5, 9, 8, 1, -2, -2, 2, 7, 11, 14, 12, 7, 2, 0,
                1, 9, 14, 14, 10, 5, 1, 0, -2, -4, -4, -4, -2, 0, 0, -5, -11, -13, -14, -11, -5,
                -2, -2, -3, -11, -18, -18, -12, -1, 9, 10, 4, 0, -6, -5, 1, 8, 12, 15, 14, 5,
                -3, -5, 0, 9, 16, 17, 12, 3, -5, -9, -3, 2, 6, 5, 0, -8, -13, -14, -13, -7, 1,
                1, -5, -8, -10, -16, -15, -10, -3, 0, 2, -2, -5, -5, -6, -1, 7, 10, 9, 9, 6, 2,
                1, 1, 4, 9, 13, 12, 11, 7, -1, -2, 1, 6, 8, 6, 1, -6, -10, -11, -9, -5, -4, -4,
                -5, -7, -9, -12, -13, -10, -4, -1, -3, -5, -7, -5, -5, -3, 1, 6, 7, 7, 5, 4, 4,
                5, 8, 10, 10, 9, 8, 8, 5, 4, 0, 0, 5, 7, 3, -1, -3, -8, -7, -7, -5, -4, -2, -4,
                -8, -10, -12, -13, -12, -6, -1, 0, -4, -8, -10, -8, -4, 2, 8, 9, 6, 2, -1, 0, 1,
                5, 7, 13, 13, 8, 3, 0, 1, 7, 11, 13, 10, 4, -4, -10, -7, -4, -3, -1, 1, -2, -9,
                -15, -15, -10, -6, -3, -1, -4, -9, -13, -14, -12, -5, 2, 5, 6, 6, 2, 0, 0, 4, 8,
                12, 12, 9, 6, 1, -1, 1, 6, 10, 12, 10, 4, -3, -6, -5, -1, 2, 1, -1, -1, -8, -14,
                -13, -9, -5, 0, -1, -6, -10, -14, -16, -11, 0, 3, 1, -1, -4, -5, -4, 0, 6, 12,
                13, 9, 5, 1, -1, 0, 5, 11, 13, 11, 6, 1, -1, 0, 1, 5, 5, 2, -2, -7, -10, -8, -7,
                -6, -4, -4, -6, -9, -10, -12, -11, -6, -1, 0, -2, -6, -8, -6, -1, 0, 5, 8, 7, 5,
                3, 2, 4, 4, 6, 9, 10, 7, 5, 3, 1, 5, 5, 5, 5, 3, -1, -5, -6, -5, -5, -3, -4, -6,
                -6, -8, -10, -9, -6, -5, -6, -5, -8, -9, -8, -6, -3, 1, 1, 2, 1, 2, 2, 5, 6, 7,
                7, 8, 7, 6, 5, 4, 5, 7, 7, 6, 4, 2, -1, -2, -2, -1, -1, -2, -3, -5, -7, -8, -8,
                -7, -6, -6, -6, -5, -8, -8, -6, -5, -5, -3, -1, -1, -1, 0, 2, 4, 4, 5, 4, 5, 5,
                5, 4, 4, 6, 7, 7, 6, 5, 4, 2, 0, 0, -1, 0, -1, -2, -4, -5, -7, -7, -6, -5, -4,
                -5, -8, -9, -9, -8, -6, -5, -3, -1, -3, -3, -2, 0, 2, 4, 6, 7, 4, 3, 2, 4, 6, 7,
                8, 7, 6, 4, 2, 2, 3, 5, 6, 3, 0, -1, -4, -5, -5, -5, -5, -5, -5, -5, -8, -8, -8,
                -7, -5, -4, -4, -4, -4, -5, -4, -3, 0, 2, 4, 4, 4, 2, 0, 2, 5, 8, 8, 7, 6, 4, 2,
                2, 3, 4, 6, 4, 3, 0, -3, -4, -4, -3, -1, -3, -4, -6, -7, -8, -8, -6, -4, -3, -3,
                -5, -8, -7, -5, -3, -1, 0, 0, 0, 0, 1, 3, 3, 4, 6, 6, 6, 5, 3, 4, 5, 4, 5, 5, 3,
                2, 2, 1, -1, -2, -2, -1, -1, -4, -6, -6, -7, -6, -5, -4, -4, -5, -6, -7, -7, -5,
                -4, -3, -1, -1, -1, 0, -1, 1, 3, 3, 5, 5, 6, 5, 3, 3, 3, 5, 5, 5, 5, 3, 2, 1, 1,
                0, -1, 0, -1, -2, -4, -5, -7, -6, -5, -4, -4, -4, -5, -6, -7, -5, -4, -4, -3,
                -1, 0, -1, -2, -2, 0, 1, 3, 6, 5, 5, 3, 2, 3, 3, 4, 6, 6, 3, 2, 2, 2, 3, 2, 1,
                -1, -1, -3, -4, -5, -5, -5, -4, -4, -4, -6, -7, -7, -5, -4, -3, -4, -3, -4, -4,
                -3, -1, 0, 0, 2, 3, 3, 3, 3, 3, 3, 4, 4, 5, 6, 4, 3, 3, 3, 3, 3, 3, 2, 0, -1,
                -3, -4, -3, -3, -3, -3, -4, -3, -5, -6, -6, -5, -3, -3, -3, -3, -3, -4, -4, -2,
                -1, 0, 1, 2, 2, 2, 2, 2, 4, 5, 5, 4, 3, 3, 3, 2, 3, 2, 2, 2, 0, -1, 0, -1, -1,
                -1, -2, -3, -4, -4, -5, -6, -5, -3, -3, -4, -4, -4, -5, -4, -3, -3, -2, -1, 0,
                0, 1, 2, 1, 2, 4, 3, 3, 3, 4, 4, 4, 4, 2, 2, 3, 3, 2, 1, 0, 0, -1, -1, -2, -3,
                -3, -3, -4, -5, -5, -4, -5, -4, -4, -3, -3, -4, -3, -3, -2, -2, -2, -1, 0, 0, 2,
                1, 2, 2, 2, 3, 3, 3, 4, 3, 3, 2, 3, 2, 2, 2, 2, 1, 0, -1, 0, 0, -2, -3, -3, -4,
                -4, -4, -5, -4, -3, -3, -3, -4, -4, -4, -3, -2, -1, -1, -1, 0, 0, -1, 2, 2, 2,
                2, 3, 3, 3, 3, 2, 2, 3, 4, 2, 2, 2, 1, 1, 2, 0, -1, -1, -1, -2, -3, -3, -3, -4,
                -4, -4, -4, -4, -3, -4, -3, -3, -3, -3, -3, -2, -2, 0, 0, 0, 1, 1, 2, 2, 3, 3,
                3, 2, 2, 3, 3, 4, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -3, -3, -4, -3, -3, -3, -3, -4,
                -4, -4, -4, -4, -3, -3, -2, -3, -2, -1, -2, 0, 0, 0, 2, 2, 2, 2, 2, 3, 3, 3, 2,
                2, 2, 2, 2, 1, 2, 1, 2, 1, 0, -1, -1, -1, -1, -2, -3, -3, -3, -3, -4, -3, -4,
                -3, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 3, 2, 1, 1, 1, 0, 1, 1, 0, -1, -2, -2, -2, -3, -2, -3, -3, -4, -3, -3, -3,
                -3, -3, -3, -2, -2, -2, -2, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1,
                1, 2, 1, 1, 0, -1, 0, 0, -1, -2, -2, -2, -2, -3, -3, -3, -4, -3, -2, -3, -3, -2,
                -2, -2, -1, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1,
                0, 0, 0, 0, -1, 0, -1, -2, -2, -2, -2, -2, -2, -3, -2, -2, -3, -3, -2, -2, -2,
                -2, -1, -2, 0, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0,
                0, -1, 0, -1, -1, -1, -2, -2, -3, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -1,
                -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
                -1, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -3, -2, -2, -2, -2, -1, -2, -1, -1,
                0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, 0, -1,
                -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -1, -1, -1,
                -1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1,
                -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -2, -1, -1, -1, -1, -1, 0,
                0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2,
                -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -1, 0, -1, 0, 0, 1, 1, 0, 1,
                1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -2, -2, -2, -2,
                -1, -2, -2, -2, -2, -2, -1, -2, -1, -1, -1, -1, 0, -1, 0, 0, 1, 0, 0, 1, 0, 1,
                1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, -1, 0, -1, 0, -2, -1, -1, -2, -2, -2, -2, -2,
                -2, -1, -2, -2, -2, -1, -2, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1,
                1, 0, 1, 0, 1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
                -2, -1, -1, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1,
                1, 1, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, -1, -2, -2, -1, -2, -2, -2, -2, -2, -1,
                -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0,
                0, 0, -1, 0, -1, -1, -1, -1, -2, -1, -2, -1, -1, -2, -2, -1, -1, -2, -1, -1, 0,
                -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0,
                -1, 0, -1, -1, -2, -2, -1, -1, -1, -2, -2, -2, -1, -1, 0, -1, -1, 0, -1, 0, 0,
                0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
                -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
                -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1,
                0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
                -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0,
                -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1,
                0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0,
                -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
                0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
                0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0,
                0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1,
                0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
                -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
                -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1,
                -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0,
                -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1,
                -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1,
                -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, 0, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
                0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1,
                -1, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
                -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1,
                0, -1, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
                -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1,
                0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1,
                -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0,
                -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1,
                0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1,
                -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, -1, 0, 0,
                -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
                0, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1,
                0, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1,
                -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
                -1, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0,
                -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1,
                0, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
                -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1,
                0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

                                           };

#endif /* BAMBOO_00_4096_H_ */
