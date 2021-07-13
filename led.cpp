/*
 *  Description: Contains the MSP's LED Functions
 *
 *  Created on: Jul 13, 2021
 *      Author: Jamie Beamguard
 */

#include "led.h"
#include "msp430.h"
#include "macros.h"

extern bool g_redLED;
extern bool g_greenLED;

// Toggles the Red LED
void toggleRedLED(void) {
    if(!g_redLED) {
        P1OUT |= REDLED;
    } else {
        P1OUT &= ~REDLED;
    }
}

// Toggles the Green LED
void toggleGreenLED(void) {
    if(!g_greenLED) {
        P6OUT |= GRNLED;
    } else {
        P6OUT &= ~GRNLED;
    }
}
