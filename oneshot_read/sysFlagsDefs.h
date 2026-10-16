/*
 * File:  	sysFlagsDefs.h
 * main:    reactionMGmain.c
 * Author: 	Uchenna Osemeka
 *
 * Created on: October 15th, 2026
*/

#ifndef sysFlagsDefs_H
#define sysFlagsDefs_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "driver/gpio.h"

// System modes
typedef enum {
    MODE_ATTRACT,
    MODE_SLEEP,
    MODE_PLAY
} SystemMode;

// Events that can happen in the sytem
typedef enum {
    EVENT_BUTTON_PRESS,
    EVENT_INACTIVITY_TIMEOUT,
    EVENT_GAME_COMPLETE
} EventType;

typedef struct {
    EventType type;
    gpio_num_t pin;
} Event;

#ifdef	__cplusplus
}
#endif

#endif /* sysFlagsDefs_H */