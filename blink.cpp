/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"

const uint LED_PIN = 2;

int main() 
{
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        printf("LED on\n");
        sleep_ms(250);
        gpio_put(LED_PIN, 0);
        printf("LED off\n");
        sleep_ms(250);
    }
    return 0;
}
