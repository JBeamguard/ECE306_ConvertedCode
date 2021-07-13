/*
 *  Description: File contains macros used for the project
 *
 *  Created on: Jul 13, 2021
 *      Author: Jamie Beamguard
 */

#ifndef MACROS_H_
#define MACROS_H_

// Port pins ---------------------------------------------

// Housekeeping
#define P2UPDEN     (P2OUT)     // Port 2 -up/-down enable
#define P4UPDEN     (P4OUT)     // Port 4 -up/-down enable

// Port Definitions -------------------------------------

// Housekeeping
#define P2PUPDEN        (P2OUT) // Port 2 Pull-up/-down Enable
#define P4PUPDEN        (P4OUT) // Port 4 Pull-up/-down Enable

// Port 1 Pins
#define REDLED          (0x01)  // Pin 1.0
#define A1_SEEED        (0x02)  // Pin 1.1
#define V_DETECT_L      (0x04)  // Pin 1.2
#define V_DETECT_R      (0x08)  // Pin 1.3
#define V_BAT           (0x10)  // Pin 1.4
#define V_THUMB         (0x20)  // Pin 1.5
#define UCA0RXD         (0x40)  // Pin 1.6
#define UCA0TXD         (0x80)  // Pin 1.7

// Port 2 Pins
#define P2_0            (0x01)  // Pin 2.0
#define P2_1            (0x02)  // Pin 2.1
#define P2_2            (0x04)  // Pin 2.2
#define SW2             (0x08)  // Pin 2.3
#define P2_4            (0x10)  // Pin 2.4
#define P2_5            (0x20)  // Pin 2.5
#define XOUT            (0x40)  // Pin 2.6
#define XIN             (0x80)  // Pin 2.7

// Port 3 Pins
#define P3_0            (0x01)  // Pin 3.0
#define P3_1            (0x02)  // Pin 3.1
#define P3_2            (0x04)  // Pin 3.2
#define P3_3            (0x08)  // Pin 3.3
#define SMCLK           (0x10)  // Pin 3.4
#define P3_5            (0x20)  // Pin 3.5
#define IOT_LINK        (0x40)  // Pin 3.6
#define P3_7            (0x80)  // Pin 3.7

// Port 4 Pins
#define RESET_LCD       (0x01)  // Pin 4.0
#define SW1             (0x02)  // Pin 4.1
#define BCL_RXD         (0x04)  // Pin 4.2
#define BCL_TXD         (0x08)  // Pin 4.3
#define UCB1_CS_LCD     (0x10)  // Pin 4.4
#define UCB1SCK         (0x20)  // Pin 4.5
#define UCB1SIMO        (0x40)  // Pin 4.6
#define UCB1SOMI        (0x80)  // Pin 4.7

// Port 5 Pins
#define IOT_RESET               (0x01)  // Pin 5.0
#define IR_LED                  (0x02)  // Pin 5.1
#define IOT_PROGRAM_SELECT      (0x04)  // Pin 5.2
#define IOT_PROGRAM_MODE        (0x10)  // Pin 5.3
#define CHECK_BAT               (0x20)  // Pin 5.4

// Port 6 Pins
#define R_FORWARD       (0x01)  // Pin 6.0
#define L_FORWARD       (0x02)  // Pin 6.1
#define R_REVERSE       (0x04)  // Pin 6.2
#define L_REVERSE       (0x08)  // Pin 6.3
#define LCD_BACKLIGHT   (0x10)  // Pin 6.4
#define P6_5            (0x20)  // Pin 6.5
#define GRNLED          (0x40)  // Pin 6.6

#endif /* MACROS_H_ */
