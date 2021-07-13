/*
 *  Description: Contains function definitions for the LCD screen
 *
 *  Created on: Jul 13, 2021
 *      Author: Jamie Beamguard
 */

#include "lcd.h"
#include "msp430.h"

// Initializes the B1 SPI peripheral for LCD communications
void initSpiB1(void) {
    UCB1CTLW0 |= UCSWRST;   // Reset the B1 SPI peripheral in order to change it

    UCB1CTLW0 |= UCSSEL1;   // SMCLK selected using 0b11
    UCB1CTLW0 |= UCSSEL0;
    UCB1CTLW0 |= UCCKPL;    // Polarity set to high
    UCB1BRW &= ~UCBR0;      // Set pre-scaler to 0x00
    UCB1BRW &= ~UCBR1;
    UCB1BRW &= ~UCBR2;
    UCB1BRW &= ~UCBR3;
    UCB1BRW &= ~UCBR4;
    UCB1BRW &= ~UCBR5;
    UCB1BRW &= ~UCBR6;
    UCB1BRW &= ~UCBR7;
    UCB1BRW &= ~UCBR8;
    UCB1BRW &= ~UCBR9;
    UCB1BRW &= ~UCBR10;
    UCB1BRW &= ~UCBR11;
    UCB1BRW &= ~UCBR12;
    UCB1BRW &= ~UCBR13;
    UCB1BRW &= ~UCBR14;
    UCB1BRW &= ~UCBR15;
    UCB1CTLW0 |= UCMST;     // Master mode
    UCB1CTLW0 &= ~UCMSB;    // LSB first
    UCB1CTLW0 &= ~UCMODE1;  // Set Mode to 0b00
    UCB1CTLW0 &= ~UCMODE0;
    UCB1CTLW0 |= UCSYNC;    // Synchronous mode

    UCB1CTLW0 &= ~UCSWRST;  // Enable the B1 SPI peripheral
}

