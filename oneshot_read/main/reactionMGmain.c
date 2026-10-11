/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#include <stdio.h>
#include <stdint.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/gpio.h"
#include "esp_timer.h"
#include "esp_log.h"
/*Objective is a simple reaction game where we measure the time it 
  takes a player to react after an LED turns on. After five tries
  the led starts to blink different colors and a result is sent,
  http or serial communication
*/

void app_main(void)
{
}