/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F15356
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LEDB aliases
#define LEDB_TRIS                 TRISAbits.TRISA2
#define LEDB_LAT                  LATAbits.LATA2
#define LEDB_PORT                 PORTAbits.RA2
#define LEDB_WPU                  WPUAbits.WPUA2
#define LEDB_OD                   ODCONAbits.ODCA2
#define LEDB_ANS                  ANSELAbits.ANSA2
#define LEDB_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LEDB_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LEDB_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LEDB_GetValue()           PORTAbits.RA2
#define LEDB_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LEDB_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LEDB_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LEDB_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LEDB_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LEDB_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LEDB_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LEDB_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ADC_BOOST aliases
#define ADC_BOOST_TRIS                 TRISAbits.TRISA3
#define ADC_BOOST_LAT                  LATAbits.LATA3
#define ADC_BOOST_PORT                 PORTAbits.RA3
#define ADC_BOOST_WPU                  WPUAbits.WPUA3
#define ADC_BOOST_OD                   ODCONAbits.ODCA3
#define ADC_BOOST_ANS                  ANSELAbits.ANSA3
#define ADC_BOOST_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ADC_BOOST_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ADC_BOOST_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ADC_BOOST_GetValue()           PORTAbits.RA3
#define ADC_BOOST_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ADC_BOOST_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ADC_BOOST_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define ADC_BOOST_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define ADC_BOOST_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define ADC_BOOST_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define ADC_BOOST_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define ADC_BOOST_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set ADC_VIN aliases
#define ADC_VIN_TRIS                 TRISAbits.TRISA4
#define ADC_VIN_LAT                  LATAbits.LATA4
#define ADC_VIN_PORT                 PORTAbits.RA4
#define ADC_VIN_WPU                  WPUAbits.WPUA4
#define ADC_VIN_OD                   ODCONAbits.ODCA4
#define ADC_VIN_ANS                  ANSELAbits.ANSA4
#define ADC_VIN_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ADC_VIN_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ADC_VIN_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ADC_VIN_GetValue()           PORTAbits.RA4
#define ADC_VIN_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ADC_VIN_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ADC_VIN_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define ADC_VIN_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define ADC_VIN_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define ADC_VIN_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define ADC_VIN_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define ADC_VIN_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set EN_FL aliases
#define EN_FL_TRIS                 TRISAbits.TRISA5
#define EN_FL_LAT                  LATAbits.LATA5
#define EN_FL_PORT                 PORTAbits.RA5
#define EN_FL_WPU                  WPUAbits.WPUA5
#define EN_FL_OD                   ODCONAbits.ODCA5
#define EN_FL_ANS                  ANSELAbits.ANSA5
#define EN_FL_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define EN_FL_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define EN_FL_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define EN_FL_GetValue()           PORTAbits.RA5
#define EN_FL_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define EN_FL_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define EN_FL_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define EN_FL_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define EN_FL_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define EN_FL_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define EN_FL_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define EN_FL_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set DISP5 aliases
#define DISP5_TRIS                 TRISAbits.TRISA6
#define DISP5_LAT                  LATAbits.LATA6
#define DISP5_PORT                 PORTAbits.RA6
#define DISP5_WPU                  WPUAbits.WPUA6
#define DISP5_OD                   ODCONAbits.ODCA6
#define DISP5_ANS                  ANSELAbits.ANSA6
#define DISP5_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define DISP5_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define DISP5_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define DISP5_GetValue()           PORTAbits.RA6
#define DISP5_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define DISP5_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define DISP5_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define DISP5_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define DISP5_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define DISP5_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define DISP5_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define DISP5_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set DISP6 aliases
#define DISP6_TRIS                 TRISAbits.TRISA7
#define DISP6_LAT                  LATAbits.LATA7
#define DISP6_PORT                 PORTAbits.RA7
#define DISP6_WPU                  WPUAbits.WPUA7
#define DISP6_OD                   ODCONAbits.ODCA7
#define DISP6_ANS                  ANSELAbits.ANSA7
#define DISP6_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define DISP6_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define DISP6_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define DISP6_GetValue()           PORTAbits.RA7
#define DISP6_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define DISP6_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define DISP6_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define DISP6_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define DISP6_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define DISP6_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define DISP6_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define DISP6_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set SEGC aliases
#define SEGC_TRIS                 TRISBbits.TRISB0
#define SEGC_LAT                  LATBbits.LATB0
#define SEGC_PORT                 PORTBbits.RB0
#define SEGC_WPU                  WPUBbits.WPUB0
#define SEGC_OD                   ODCONBbits.ODCB0
#define SEGC_ANS                  ANSELBbits.ANSB0
#define SEGC_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SEGC_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SEGC_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SEGC_GetValue()           PORTBbits.RB0
#define SEGC_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SEGC_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SEGC_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SEGC_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SEGC_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SEGC_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SEGC_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define SEGC_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set SEGDP aliases
#define SEGDP_TRIS                 TRISBbits.TRISB1
#define SEGDP_LAT                  LATBbits.LATB1
#define SEGDP_PORT                 PORTBbits.RB1
#define SEGDP_WPU                  WPUBbits.WPUB1
#define SEGDP_OD                   ODCONBbits.ODCB1
#define SEGDP_ANS                  ANSELBbits.ANSB1
#define SEGDP_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SEGDP_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SEGDP_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SEGDP_GetValue()           PORTBbits.RB1
#define SEGDP_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SEGDP_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SEGDP_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SEGDP_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SEGDP_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SEGDP_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SEGDP_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define SEGDP_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set SEGD aliases
#define SEGD_TRIS                 TRISBbits.TRISB2
#define SEGD_LAT                  LATBbits.LATB2
#define SEGD_PORT                 PORTBbits.RB2
#define SEGD_WPU                  WPUBbits.WPUB2
#define SEGD_OD                   ODCONBbits.ODCB2
#define SEGD_ANS                  ANSELBbits.ANSB2
#define SEGD_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SEGD_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SEGD_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SEGD_GetValue()           PORTBbits.RB2
#define SEGD_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SEGD_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SEGD_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SEGD_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SEGD_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SEGD_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SEGD_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define SEGD_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set SEGE aliases
#define SEGE_TRIS                 TRISBbits.TRISB3
#define SEGE_LAT                  LATBbits.LATB3
#define SEGE_PORT                 PORTBbits.RB3
#define SEGE_WPU                  WPUBbits.WPUB3
#define SEGE_OD                   ODCONBbits.ODCB3
#define SEGE_ANS                  ANSELBbits.ANSB3
#define SEGE_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define SEGE_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define SEGE_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define SEGE_GetValue()           PORTBbits.RB3
#define SEGE_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define SEGE_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define SEGE_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define SEGE_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define SEGE_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define SEGE_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define SEGE_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define SEGE_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set SEGB aliases
#define SEGB_TRIS                 TRISBbits.TRISB4
#define SEGB_LAT                  LATBbits.LATB4
#define SEGB_PORT                 PORTBbits.RB4
#define SEGB_WPU                  WPUBbits.WPUB4
#define SEGB_OD                   ODCONBbits.ODCB4
#define SEGB_ANS                  ANSELBbits.ANSB4
#define SEGB_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SEGB_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SEGB_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SEGB_GetValue()           PORTBbits.RB4
#define SEGB_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SEGB_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SEGB_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SEGB_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SEGB_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SEGB_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SEGB_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SEGB_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SEGF aliases
#define SEGF_TRIS                 TRISBbits.TRISB5
#define SEGF_LAT                  LATBbits.LATB5
#define SEGF_PORT                 PORTBbits.RB5
#define SEGF_WPU                  WPUBbits.WPUB5
#define SEGF_OD                   ODCONBbits.ODCB5
#define SEGF_ANS                  ANSELBbits.ANSB5
#define SEGF_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SEGF_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SEGF_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SEGF_GetValue()           PORTBbits.RB5
#define SEGF_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SEGF_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SEGF_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SEGF_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SEGF_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SEGF_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SEGF_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define SEGF_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SEGA aliases
#define SEGA_TRIS                 TRISBbits.TRISB6
#define SEGA_LAT                  LATBbits.LATB6
#define SEGA_PORT                 PORTBbits.RB6
#define SEGA_WPU                  WPUBbits.WPUB6
#define SEGA_OD                   ODCONBbits.ODCB6
#define SEGA_ANS                  ANSELBbits.ANSB6
#define SEGA_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SEGA_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SEGA_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SEGA_GetValue()           PORTBbits.RB6
#define SEGA_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SEGA_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SEGA_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SEGA_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define SEGA_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define SEGA_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define SEGA_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define SEGA_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set SEGG aliases
#define SEGG_TRIS                 TRISBbits.TRISB7
#define SEGG_LAT                  LATBbits.LATB7
#define SEGG_PORT                 PORTBbits.RB7
#define SEGG_WPU                  WPUBbits.WPUB7
#define SEGG_OD                   ODCONBbits.ODCB7
#define SEGG_ANS                  ANSELBbits.ANSB7
#define SEGG_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SEGG_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SEGG_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SEGG_GetValue()           PORTBbits.RB7
#define SEGG_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SEGG_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SEGG_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SEGG_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SEGG_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define SEGG_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define SEGG_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define SEGG_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set DISP4 aliases
#define DISP4_TRIS                 TRISCbits.TRISC0
#define DISP4_LAT                  LATCbits.LATC0
#define DISP4_PORT                 PORTCbits.RC0
#define DISP4_WPU                  WPUCbits.WPUC0
#define DISP4_OD                   ODCONCbits.ODCC0
#define DISP4_ANS                  ANSELCbits.ANSC0
#define DISP4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DISP4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DISP4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DISP4_GetValue()           PORTCbits.RC0
#define DISP4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DISP4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define DISP4_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define DISP4_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define DISP4_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define DISP4_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define DISP4_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define DISP4_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set DISP3 aliases
#define DISP3_TRIS                 TRISCbits.TRISC1
#define DISP3_LAT                  LATCbits.LATC1
#define DISP3_PORT                 PORTCbits.RC1
#define DISP3_WPU                  WPUCbits.WPUC1
#define DISP3_OD                   ODCONCbits.ODCC1
#define DISP3_ANS                  ANSELCbits.ANSC1
#define DISP3_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define DISP3_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define DISP3_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define DISP3_GetValue()           PORTCbits.RC1
#define DISP3_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define DISP3_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define DISP3_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define DISP3_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define DISP3_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define DISP3_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define DISP3_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define DISP3_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set DISP2 aliases
#define DISP2_TRIS                 TRISCbits.TRISC3
#define DISP2_LAT                  LATCbits.LATC3
#define DISP2_PORT                 PORTCbits.RC3
#define DISP2_WPU                  WPUCbits.WPUC3
#define DISP2_OD                   ODCONCbits.ODCC3
#define DISP2_ANS                  ANSELCbits.ANSC3
#define DISP2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define DISP2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define DISP2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define DISP2_GetValue()           PORTCbits.RC3
#define DISP2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define DISP2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define DISP2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define DISP2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define DISP2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define DISP2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define DISP2_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define DISP2_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set DISP1 aliases
#define DISP1_TRIS                 TRISCbits.TRISC4
#define DISP1_LAT                  LATCbits.LATC4
#define DISP1_PORT                 PORTCbits.RC4
#define DISP1_WPU                  WPUCbits.WPUC4
#define DISP1_OD                   ODCONCbits.ODCC4
#define DISP1_ANS                  ANSELCbits.ANSC4
#define DISP1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define DISP1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define DISP1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define DISP1_GetValue()           PORTCbits.RC4
#define DISP1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define DISP1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define DISP1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define DISP1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define DISP1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define DISP1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define DISP1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define DISP1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISCbits.TRISC5
#define SCL1_LAT                  LATCbits.LATC5
#define SCL1_PORT                 PORTCbits.RC5
#define SCL1_WPU                  WPUCbits.WPUC5
#define SCL1_OD                   ODCONCbits.ODCC5
#define SCL1_ANS                  ANSELCbits.ANSC5
#define SCL1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SCL1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SCL1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SCL1_GetValue()           PORTCbits.RC5
#define SCL1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISCbits.TRISC6
#define SDA1_LAT                  LATCbits.LATC6
#define SDA1_PORT                 PORTCbits.RC6
#define SDA1_WPU                  WPUCbits.WPUC6
#define SDA1_OD                   ODCONCbits.ODCC6
#define SDA1_ANS                  ANSELCbits.ANSC6
#define SDA1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SDA1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SDA1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SDA1_GetValue()           PORTCbits.RC6
#define SDA1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set BUTTONS aliases
#define BUTTONS_TRIS                 TRISCbits.TRISC7
#define BUTTONS_LAT                  LATCbits.LATC7
#define BUTTONS_PORT                 PORTCbits.RC7
#define BUTTONS_WPU                  WPUCbits.WPUC7
#define BUTTONS_OD                   ODCONCbits.ODCC7
#define BUTTONS_ANS                  ANSELCbits.ANSC7
#define BUTTONS_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define BUTTONS_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define BUTTONS_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define BUTTONS_GetValue()           PORTCbits.RC7
#define BUTTONS_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define BUTTONS_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define BUTTONS_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define BUTTONS_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define BUTTONS_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define BUTTONS_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define BUTTONS_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define BUTTONS_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF7 pin functionality
 * @Example
    IOCCF7_ISR();
 */
void IOCCF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF7_SetInterruptHandler() method.
    This handler is called every time the IOCCF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(IOCCF7_InterruptHandler);

*/
extern void (*IOCCF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF7_SetInterruptHandler() method.
    This handler is called every time the IOCCF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(IOCCF7_DefaultInterruptHandler);

*/
void IOCCF7_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/