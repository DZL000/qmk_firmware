#include "rev2.h"

void led_set_kb(uint8_t usb_led) {
  // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

  // to turn on rgb when caplock is on
  // if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
  //   DDRB |= (1 << 2); PORTB &= ~(1 << 2);
  //   rgblight_enable();
  // } else {
  //   DDRB &= ~(1 << 2); PORTB &= ~(1 << 2);
  //   rgblight_disable();
  // }

  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinLow(B2);
  } else {
    writePinHigh(B2);
  }

  led_set_user(usb_led);
}

void matrix_init_kb(void) {
  setPinOutput(B2);
  matrix_init_user();
}
