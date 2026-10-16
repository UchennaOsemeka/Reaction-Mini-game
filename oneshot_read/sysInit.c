/*
 * File:  	sysInit.c
 * main:    reactionMGmain.c
 * Author: 	Uchenna Osemeka
 *
 * Created on: October 13th, 2026
*/
 
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"
#include "pinConfig.h"

void IOInit(){ //initialize input/output
	//reset LED Output Pin
	gpio_reset_pin(ledPin);
	gpio_set_direction(ledPin, GPIO_MODE_OUTPUT);
		
	//reset Button1 Input Pin
	gpio_reset_pin(buttonPin1);
	gpio_set_direction(buttonPin1, GPIO_MODE_INPUT);
	gpio_set_pull_mode(buttonPin1, GPIO_PULLDOWN_ONLY);
	
	//reset Button2 Input Pin
	gpio_reset_pin(buttonPin2);
	gpio_set_direction(buttonPin2, GPIO_MODE_INPUT);
	gpio_set_pull_mode(buttonPin2, GPIO_PULLDOWN_ONLY);
	
	//reset Button3 Input Pin
	gpio_reset_pin(buttonPin3);
	gpio_set_direction(buttonPin3, GPIO_MODE_INPUT);
	gpio_set_pull_mode(buttonPin3, GPIO_PULLDOWN_ONLY);
	
}

void InterruptInit(){
	
}

void TimerInit(){
}

void EventsInit(){ //initialize queue for events
    eventQueue = xQueueCreate(10, sizeof(Event));
    configASSERT(eventQueue != NULL);
}
