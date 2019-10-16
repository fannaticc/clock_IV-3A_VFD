/* 
 * File:   hardware.c
 * Author: Raphael
 *
 * Created on 7 de Outubro de 2019, 08:51
 */

#include <stdint.h>
#include <stdbool.h>

#include "hardware.h"
#include "mcc_generated_files/adc.h"
#include "mcc_generated_files/pin_manager.h"
#include "isr.h"

void btn_care()
{
    flags.auxSharedIOC = 1;
}

void SampleSharedAuxInputs()
{
    BUTTONS_ANS = 1; // Change to analog
    
    ADC_BTN_TIME = 1; // Read the analog voltage on the push buttons pin
    
    while(ADC_BTN_TIME);
    
    if(adc_btn_result < IOC_ADC)
    {
        if(adc_btn_result >= 16 && adc_btn_result <= 38)
        {
            inputs.btn1 = 1;
        }
        else if(adc_btn_result >= 40 && adc_btn_result <= 62)
        {
            inputs.btn2 = 1;
        }
        else if(adc_btn_result >= 64 && adc_btn_result <= 86)
        {
            inputs.btn3 = 1;
        }
        
        
        /*if(BTN1_ADC < adc_btn_result && adc_btn_result < BTN2_ADC)
        {
            inputs.btn1 = 1;
        }
        else if(BTN2_ADC < adc_btn_result && adc_btn_result < BTN3_ADC)
        {
            inputs.btn2 = 1;
        }
        else
        {
            inputs.btn3 = 1;
        }*/
    }
    
    BUTTONS_ANS = 0; // Change back to digital I/O
}

bool getBTN1(){
    bool result;

    result = inputs.btn1;
    
    if(result == 1)
    {
        inputs.btn1 = 0; // Clear
    }
    
    return result;
}

bool getBTN2(){
    bool result;

    result = inputs.btn2;
    
    if(result == 1)
    {
        inputs.btn2 = 0; // Clear
    }
    
    return result;
}

bool getBTN3(){
    bool result;

    result = inputs.btn3;
    
    if(result == 1)
    {
        inputs.btn3 = 0; // Clear
    }
    
    return result;
}