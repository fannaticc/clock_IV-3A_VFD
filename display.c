/* 
 * File:   display.c
 * Author: Raphael
 *
 * Created on September 30, 2019, 6:17 PM
 */

#include <stdint.h>

#include "display.h"
#include "mcc_generated_files/pin_manager.h"
//#include "main.h"

void display_care()
{
    AcenderAlgarismo(display_index);
    Acende_Num(port_array[display_index]);

    if(display_index >= 11)
    {
        display_index = 0;
    }
    else
    {
        display_index ++;
    }
}

void Acende_Num(unsigned char num)
{
    /*switch(num)
    {
        case 0: NUM_0();
                break;
                
        case 1: NUM_1();
                break;
                
        case 2: NUM_2();
                break;
                
        case 3: NUM_3();
                break;
                
        case 4: NUM_4();
                break;
                
        case 5: NUM_5();
                break;
                
        case 6: NUM_6();
                break;
                
        case 7: NUM_7();
                break;
                
        case 8: NUM_8();
                break;
                
        case 9: NUM_9();
                break;
    }*/
    
    switch(num)
    {
        case '0': NUM_0();
                break;
                
        case '1': NUM_1();
                break;
                
        case '2': NUM_2();
                break;
                
        case '3': NUM_3();
                break;
                
        case '4': NUM_4();
                break;
                
        case '5': NUM_5();
                break;
                
        case '6': NUM_6();
                break;
                
        case '7': NUM_7();
                break;
                
        case '8': NUM_8();
                break;
                
        case '9': NUM_9();
                break;
        default:
            NUM_N();
            break; 
    }
}

void AcenderAlgarismo(unsigned char num)
{
  switch (num)
  {
    case 0: DISP6_LAT = 0;
            DISP1_LAT = 1;
            break;
             
    case 2: DISP1_LAT = 0;
            DISP2_LAT = 1;
            break;
             
    case 4: DISP2_LAT = 0;
            DISP3_LAT = 1;
            break;
             
    case 6: DISP3_LAT = 0;
            DISP4_LAT = 1;
            break;
            
    case 8: DISP4_LAT = 0;
            DISP5_LAT = 1;
            break;
            
    case 10: DISP5_LAT = 0;
            DISP6_LAT = 1;
            break;        
             
    default: DISP1_LAT = 0;
             DISP2_LAT = 0;
             DISP3_LAT = 0;
             DISP4_LAT = 0;
             DISP5_LAT = 0;
             DISP6_LAT = 0;
             break;
   }
 } 