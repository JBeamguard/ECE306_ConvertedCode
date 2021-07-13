/*
 *  Description: main.cpp for the car itself
 *
 *  Created on: Jul 13, 2021
 *      Author: Jamie Beamguard
 */

#include "ports.h"
#include "led.h"

bool g_redLED;
bool g_greenLED;

int main (void) {
    initPorts();    // Begin by initializing the system port pins

    toggleGreenLED();   // After initialization, flash green LED

    while(1){
        // Display_Process();

    };

    return 0;
}
