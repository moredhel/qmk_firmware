/*
 *           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *
 * Copyright (C) 2019 4sStylZ <4sstylz@protonmail.ch>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
 */
#include QMK_KEYBOARD_H
// #include config.h

void setFNDisplay(int layer) {

    switch (layer) {
        case _FN:
            _delay_ms(10);
            rgblight_setrgb_at(168, 96, 209, 0);
            _delay_ms(10);
            rgblight_setrgb_at(114, 174, 212, 1);
            _delay_ms(10);
            rgblight_setrgb_at(56, 120, 209, 2);
            _delay_ms(10);
            rgblight_setrgb_at(56, 120, 209, 3);
            _delay_ms(10);
            rgblight_setrgb_at(114, 174, 212, 4);
            _delay_ms(10);
            rgblight_setrgb_at(168, 96, 209, 5);
            break;
        default:
            _delay_ms(10);
            rgblight_setrgb_at(255,255,255, 0);
            _delay_ms(10);
            rgblight_setrgb_at(255,255,255, 1);
            _delay_ms(10);
            rgblight_setrgb_at(255,255,255, 2);
            _delay_ms(10);
            rgblight_setrgb_at(255,255,255, 3);
            _delay_ms(10);
            rgblight_setrgb_at(255,255,255, 4);
            _delay_ms(10);
            rgblight_setrgb_at(255,255,255, 5);
            break;
    }

}
void setDefaultDisplay(void) {
    _delay_ms(10);
    rgblight_setrgb_at(145, 45, 220, 0);
    _delay_ms(10);
    rgblight_setrgb_at(145, 45, 220, 1);
    _delay_ms(10);
    rgblight_setrgb_at(145, 45, 220, 2);
    _delay_ms(10);
    rgblight_setrgb_at(145, 45, 220, 3);
    _delay_ms(10);
    rgblight_setrgb_at(145, 45, 220, 4);
    _delay_ms(10);
    rgblight_setrgb_at(145, 45, 220
    , 5);
}
