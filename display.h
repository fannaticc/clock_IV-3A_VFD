/* 
 * File:   display.h
 * Author: Raphael
 *
 * Created on September 30, 2019, 6:17 PM
 */

#ifndef DISPLAY_H
#define	DISPLAY_H

#define NUM_0() LATB = 0b01111101;
#define NUM_1() LATB = 0b00010001;
#define NUM_2() LATB = 0b11011100;
#define NUM_3() LATB = 0b11010101;
#define NUM_4() LATB = 0b10110001;
#define NUM_5() LATB = 0b11100101;
#define NUM_6() LATB = 0b11101101;
#define NUM_7() LATB = 0b01010001;
#define NUM_8() LATB = 0b11111101;
#define NUM_9() LATB = 0b11110101;
#define NUM_N() LATB = 0b00000000;

unsigned char display_index = 0;
unsigned char port_array[12] = {'0','0','0','0','0','0','0','0','0','0','0'};

void AcenderAlgarismo(unsigned char num);
void Acende_Num(unsigned char num);
void display_care();

#endif	/* DISPLAY_H */

