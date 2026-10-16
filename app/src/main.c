/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define SLEEP_MS 1

int main(void) {
  LED_init();


 

  LED_blink(LED0,LED_1HZ);
  LED_blink(LED1,LED_2HZ);
  LED_blink(LED2,LED_4HZ);
  LED_blink(LED3,LED_8HZ);
  

  return 0;
}

