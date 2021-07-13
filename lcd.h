/*
 *  Description: Contains function declarations for the LCD
 *
 *  Created on: Jul 13, 2021
 *      Author: Jamie Beamguard
 */

#ifndef LCD_H_
#define LCD_H_

void initSpiB1(void);
void spiB1Write(char byte);
void writeIns(char instructions);
void writeData(char data);
void spiChipselectActive(void);
void spiChipselectIdle(void);
void spiResetActive(void);
void spiResetIdle(void);
void displayProcess(void);
void displayUpdate(char p_L1, char p_L2, char p_L3, char p_L4);
void lcdOut(char *s, char line, char position);
void enableDisplayUpdate(void);
void updateString(char *string_data, int string);
void initLCD(void);



#endif /* LCD_H_ */
