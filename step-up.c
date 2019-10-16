/* 
 * File:   step-up.c
 * Author: Raphael
 *
 * Created on September 19, 2019, 2:28 PM
 */

#include <stdint.h>

#include "step-up.h"
#include "mcc_generated_files/pwm3.h"

void boost_care()
{
    boost_voltage_adc = (adc_boost_result - OFFSET);
    
    if (boost_voltage_adc < DESIRED_ADC_RESULT && pwm_value < MAX_PWM_LEVEL) {
        pwm_value++;
        PWM3_LoadDutyValue(pwm_value);
    }
    else if (boost_voltage_adc > DESIRED_ADC_RESULT && pwm_value > MIN_PWM_LEVEL) {
        pwm_value--;
        PWM3_LoadDutyValue(pwm_value);
    }
}