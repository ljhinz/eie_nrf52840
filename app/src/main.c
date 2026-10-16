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

  while(1){
    LED_toggle(LED0);
    k_msleep(500);
  }

  return 0;
}

