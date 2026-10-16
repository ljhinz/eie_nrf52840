/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define STEP_DELAY 100

int main(void) {
  LED_init();
  BTN_init();


 while (1) {
    
  int count = 0;

  while(1) {

    if (BTN_check_clear_pressed(BTN0)) {
      count = (count + 1) % 16;
      LED_set(LED0, (count & 1) ? LED_ON : LED_OFF);
      LED_set(LED1, (count & 2) ? LED_ON : LED_OFF);
      LED_set(LED2, (count & 4) ? LED_ON : LED_OFF);
      LED_set(LED3, (count & 8) ? LED_ON : LED_OFF);

    }

  }
    
 }
  
  

  return 0;
}

