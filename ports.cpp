/*
 *  Description: Contains the port initialization functions
 *
 *  Created on: Jul 13, 2021
 *      Author: Jamie Beamguard
 */

#include "ports.h"
#include "macros.h"
#include "msp430.h"

// Initialize all of the individual ports of the system
void initPorts(void) {
    // Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

    initPort1();
    initPort2();
    initPort3();
    initPort4();
    initPort5();
    initPort6();
}

// Initialize Port 1 Pins
void initPort1(void) {
    P1SEL1 &= ~REDLED;     // Pin 1.0 Red LED starting 'OFF'
    P1SEL0 &= ~REDLED;
    P1OUT &= ~REDLED;
    P1DIR |= REDLED;

    P1SEL1 |= A1_SEEED;    // Pin 1.1 A1_SEEED
    P1SEL0 |= A1_SEEED;

    P1SEL1 |= V_DETECT_L;  // Pin 1.2 V_Detect_L
    P1SEL0 |= V_DETECT_L;

    P1SEL1 |= V_DETECT_R;  // Pin 1.3 V_Detect_R
    P1SEL0 |= V_DETECT_R;

    P1SEL1 |= V_BAT;       // Pin 1.4 V_Bat
    P1SEL0 |= V_BAT;

    P1SEL1 |= V_THUMB;     // Pin 1.5 V_Thumb
    P1SEL0 |= V_THUMB;

    P1SEL1 &= ~UCA0RXD;    // Pin 1.6 UCA0RXD
    P1SEL0 |= UCA0RXD;

    P1SEL1 &= ~UCA0TXD;    // Pin 1.7 UCA0TXD
    P1SEL0 |= UCA0TXD;
}

// Initialize Port 2 Pins
void initPort2(void) {
    P2SEL1 &= ~P2_0;       // Pin 2.0
    P2SEL1 &= ~P2_0;
    P2OUT &= ~P2_0;
    P2DIR |= P2_0;

    P2SEL1 &= ~P2_1;       // Pin 2.1
    P2SEL0 &= ~P2_1;
    P2OUT &= ~P2_1;
    P2DIR |= P2_1;

    P2SEL1 &= ~P2_2;       // Pin 2.2
    P2SEL0 &= ~P2_2;
    P2OUT &= ~P2_2;
    P2DIR |= P2_2;

    P2SEL1 &= ~SW2;        // Pin 2.3 SW2
    P2SEL0 &= ~SW2;
    P2PUPDEN |= SW2; // Set up/down as pull-up R
    P2DIR &= ~SW2;   // Set as input
    P2REN |= SW2;    // Enable pull-up R

    P2SEL1 &= ~P2_4;       // Pin 2.4
    P2SEL0 &= ~P2_4;
    P2OUT &= ~P2_4;
    P2DIR |= P2_4;

    P2SEL1 &= ~P2_5;       // Pin 2.5
    P2SEL0 &= ~P2_5;
    P2OUT &= ~P2_5;
    P2DIR |= ~P2_5;

    P2SEL1 |= XOUT;        // Pin 2.6 XOUT
    P2SEL0 &= ~XOUT;

    P2SEL1 |= XIN;         // Pin 2.7 XIN
    P2SEL0 &= ~XIN;
}

// Initialize Port 3 Pins
void initPort3(void) {
    P3SEL1 &= ~P3_0;       // Pin 3.0
    P3SEL0 &= ~P3_0;
    P3OUT &= ~P3_0;
    P3DIR |= P3_0;

    P3SEL1 &= ~P3_1;       // Pin 3.1
    P3SEL0 &= ~P3_1;
    P3OUT &= ~P3_1;
    P3DIR |= P3_1;

    P3SEL1 &= ~P3_2;      // Pin 3.2
    P3SEL0 &= ~P3_2;
    P3OUT &= ~P3_2;
    P3DIR |= P3_2;

    P3SEL1 &= ~P3_3;      // Pin 3.3
    P3SEL0 &= ~P3_3;
    P3OUT &= ~P3_3;
    P3DIR |= P3_3;

    P3SEL1 &= ~SMCLK;      // Pin 3.4 SMCLK
    P3SEL0 |= SMCLK;
    P3DIR |= SMCLK;

    P3SEL1 &= ~P3_5;      // Pin 3.5
    P3SEL0 &= ~P3_5;
    P3OUT &= ~P3_5;
    P3DIR |= P3_5;

    P3SEL1 &= ~IOT_LINK;   // Pin 3.6 IOT Link
    P3SEL0 &= ~IOT_LINK;
    P3OUT &= ~IOT_LINK;
    P3DIR |= IOT_LINK;

    P3SEL1 &= ~P3_7;      // Pin 3.7
    P3SEL0 &= ~P3_7;
    P3OUT &= ~P3_7;
    P3DIR |= P3_7;
}

// Initialize Port 4 Pins
void initPort4(void) {
    P4SEL1 &= ~RESET_LCD;  // Pin 4.0 Reset LCD
    P4SEL0 &= ~RESET_LCD;
    P4OUT |= RESET_LCD;
    P4DIR |= RESET_LCD;

    P4SEL1 &= ~SW1;       // Pin 4.1 SW1
    P4SEL0 &= ~SW1;
    P4PUPDEN |= SW1; // Set up/down as pull-up R
    P4DIR &= ~SW1;   // Set as input
    P4REN |= SW1;    // Enable the pull-up R

    P4SEL1 &= ~BCL_RXD;    // Pin 4.2 BCL RXD
    P4SEL0 |= BCL_RXD;

    P4SEL1 &= ~BCL_TXD;   // Pin 4.3 BCL TXD
    P4SEL0 &= ~BCL_TXD;

    P4SEL1 &= ~UCB1_CS_LCD;        // Pin 4.4 Chip Select
    P4SEL0 &= ~UCB1_CS_LCD;
    P4OUT |= UCB1_CS_LCD;
    P4DIR |= UCB1_CS_LCD;

    P4SEL1 &= ~UCB1SCK;    // Pin 4.5 UCB1SCK
    P4SEL0 |= UCB1SCK;

    P4SEL1 &= ~UCB1SIMO;   // Pin 4.6 UCB1SIMO
    P4SEL0 |= UCB1SIMO;

    P4SEL1 &= ~UCB1SOMI;   // Pin 4.7 UCB1SOMI
    P4SEL0 |= UCB1SOMI;
}

// Initialize Port 5 Pins
void initPort5(void) {
    P5SEL1 |= IOT_RESET;   // Pin 5.0 IOT Reset
    P5SEL0 |= IOT_RESET;

    P5SEL1 |= IR_LED;     // Pin 5.1 IR LED
    P5SEL0 |= IR_LED;

    P5SEL1 |= IOT_PROGRAM_SELECT; // Pin 5.2 IOT Program Select
    P5SEL0 |= IOT_PROGRAM_SELECT;

    P5SEL1 |= IOT_PROGRAM_MODE; // Pin 5.3 IOT Program Mode
    P5SEL0 |= IOT_PROGRAM_MODE;

    P5SEL1 &= ~CHECK_BAT; // Pin 5.4 Check Battery
    P5SEL0 &= ~CHECK_BAT;
    P5DIR &= ~CHECK_BAT;
}

// Initiazlize Port 6 Pins
void initPort6(void) {
    P6SEL1 &= ~R_FORWARD; // Pin 6.0 Right Forward
    P6SEL0 &= ~R_FORWARD;
    P6OUT &= ~R_FORWARD;
    P6DIR |= R_FORWARD;

    P6SEL1 &= ~L_FORWARD; // Pin 6.1 Left Forward
    P6SEL0 &= ~L_FORWARD;
    P6OUT &= ~L_FORWARD;
    P6DIR |= L_FORWARD;

    P6SEL1 &= ~R_REVERSE; // Pin 6.2 Right Reverse
    P6SEL0 &= ~R_REVERSE;
    P6OUT &= ~R_REVERSE;
    P6DIR |= R_REVERSE;

    P6SEL1 &= ~L_REVERSE; // Pin 6.3 Left Reverse
    P6SEL0 &= ~L_REVERSE;
    P6OUT &= ~L_REVERSE;
    P6DIR |= L_REVERSE;

    P6SEL1 &= ~LCD_BACKLIGHT;     // Pin 6.4 LCD Backlight
    P6SEL0 &= ~LCD_BACKLIGHT;
    P6OUT &= ~LCD_BACKLIGHT;
    P6DIR |= LCD_BACKLIGHT;

    P6SEL1 &= ~P6_5;      // Pin 6.5
    P6SEL0 &= ~P6_5;
    P6OUT &= ~P6_5;
    P6DIR |= P6_5;

    P6SEL1 &= ~GRNLED;      // Pin 6.6 Green LED
    P6SEL0 &= ~GRNLED;
    P6OUT &= ~GRNLED;
    P6DIR |= GRNLED;
}
