/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F15356
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include <stdint.h>

#include "step-up.h"
#include "display.h"
#include "my_i2c.h"
#include "ds3231.h"
#include "hardware.h"
#include "isr.h"
#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint8_t time[10];
    uint8_t value1 = 0;
    uint8_t hour_mode = 0;
    uint8_t flag_button1;
    uint8_t flag_button2;
    uint8_t flag_button3;
    
    // initialize the device
    SYSTEM_Initialize();
    
    TMR0_SetInterruptHandler(display_care);
    TMR1_SetInterruptHandler(boost_care);
    //ADC_SetInterruptHandler(adc_care);
    IOCCF7_SetInterruptHandler(btn_care);
    
    I2C_Close(); // Close the  I2C Bus.
    
    I2C_Init(79); // I2C 100kHz, 32MHz-CRYSTAL.
    //I2C_Init(49); // I2C 100kHz, 20MHz-CRYSTAL.
    //I2C_Init(19); // I2C 100kHz, 8MHz-CRYSTAL.
    //I2C_Init(9); // I2C 100kHz, 4MHz-CRYSTAL.
    
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
    PWM3_LoadDutyValue(pwm_value);
    ADC_SelectChannel(ADC_BOOST);
    ADC_StartConversion();
    
    //==============================================================================
    //Sets the calendar information.
    //==============================================================================
    //DS3231_SetInfo(SECONDS, 0x00);
    //DS3231_SetInfo(MINUTES, 0x34);
    //DS3231_SetInfo(HOURS, 0x02 | MODE_12HOUR_PM);
    //DS3231_SetInfo(DAY, 0x01);
    //DS3231_SetInfo(DATE, 0x01);
    //DS3231_SetInfo(MONTH, 0x10);
    //DS3231_SetInfo(YEAR, 0x19);
    //==============================================================================
    
    flag_button1 = 0;
    flag_button2 = 0;
    flag_button3 = 0;
    
    while(1)
    {
        //INTCONbits.GIE = 0; // Disable interrupts
        hour_mode = DS3231_GetTime(time);
        //INTCONbits.GIE = 1; // Enable interrupts
        
        if(getBTN1() == 1)
        {
            if(flag_button1 == 0)
            {
                flag_button1 = 1;
                DS3231_AddData(MINUTES);
                __delay_ms(1);
            }
        }
        else
        {
            flag_button1 = 0;
        }
        
        if(getBTN2() == 1)
        {
            if(flag_button2 == 0)
            {
                flag_button2 = 1;
                DS3231_AddData(HOURS);
                __delay_ms(1);
            }
        }
        else
        {
            flag_button2 = 0;
        }
        
        if(getBTN3() == 1)
        {
            if(flag_button3 == 0)
            {
                flag_button3 = 1;
                value1 = !value1;
                __delay_ms(1);
            }
        }
        else
        {
            flag_button3 = 0;
        }
        
        port_array[10] = time[7];
        port_array[8] = time[6];
        port_array[6] = time[4];
        port_array[4] = time[3];
        port_array[2] = time[1];
        port_array[0] = time[0];
        
        if (flags.auxSharedIOC)
        {
            SampleSharedAuxInputs();
            flags.auxSharedIOC = 0;
        }
    }
}