/*
 * File:  	pinConfig.h
 * main:    reactionMGmain.c
 * Author: 	Uchenna Osemeka
 *
 * Created on: October 15th, 2026
*/

#ifndef pinConfig_H
#define pinConfig_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "driver/gpio.h"

// Pin Definitions
#define ledPin      GPIO_NUM_2
#define buttonPin1  GPIO_NUM_25
#define buttonPin2  GPIO_NUM_26
#define buttonPin3  GPIO_NUM_27

#ifdef	__cplusplus
}
#endif

#endif /* pinConfig_H */

