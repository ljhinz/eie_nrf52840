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

  LED_toggle(LED3);
  while(1){

    LED_toggle(LED0);
    LED_toggle(LED3);

    k_msleep(250);

    LED_toggle(LED1);
    LED_toggle(LED0);

    k_msleep(250);

    LED_toggle(LED2);
    LED_toggle(LED1);

    k_msleep(250);

    LED_toggle(LED3);
    LED_toggle(LED2);

    k_msleep(250);
  }

  return 0;
}

