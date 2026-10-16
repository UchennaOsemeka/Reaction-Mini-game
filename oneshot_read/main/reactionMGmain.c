/*
 * File:  	reactionMGmain.c
 * Author: 	Uchenna Osemeka
 *
 * Created on: October 13th, 2026
 */
/*Objective is a simple reaction game where we measure the time it 
  takes a player to react after an LED turns on. After five tries
  the led starts to blink different colors and a result is sent,
  http or serial communication
  First State Transition Diagram
  https://drive.google.com/file/d/1P8ulrxQMStHPCMZV5JAXBnQ5HL83Wyud/view?usp=sharing
*/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"

//Global Variables
static QueueHandle_t eventQueue = NULL;

void app_main(void)
{
	Event event;
//so with yoiur queue syructure the isr does not set any flags but passes that event
 //to the event handler who then determines what to do based on already set flags, it 
 //also sets flags
    while (1)
    {
        if (xQueueReceive(eventQueue, &event, portMAX_DELAY
        ) == pdTRUE) {
            handleEvent(event);
        }
    }
}