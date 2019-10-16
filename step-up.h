/* 
 * File:   step-up.h
 * Author: Raphael
 *
 * Created on September 19, 2019, 2:28 PM
 */

#ifndef STEP_UP_H
#define	STEP_UP_H

#include <stdint.h>

#define ADC_VREF 5

#define DESIRED_VOUT 32.0

#define DIVIDER_RATIO 7.835

#define DESIRED_ADC_IN_V (DESIRED_VOUT / DIVIDER_RATIO)

#define MAX_PWM_LEVEL 200 // Equivalente a 200V com cargade 6 tubos IN-12 apresentando o numero 8!!!
#define MIN_PWM_LEVEL 1

#define OFFSET 0

#define ADC_RESOLUTION10 1023
#define ADC_RESOLUTION12 4095

#define DESIRED_ADC_RESULT (ADC_RESOLUTION10 * (DESIRED_ADC_IN_V / ADC_VREF))

uint16_t boost_voltage_adc = 0;
uint16_t adc_boost_result = 0;
uint16_t pwm_value = 8;

void boost_care();

#endif	/* STEP_UP_H */

