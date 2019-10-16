/* 
 * File:   hardware.h
 * Author: Raphael
 *
 * Created on 7 de Outubro de 2019, 08:51
 */

#ifndef HARDWARE_H
#define	HARDWARE_H

#include <stdint.h>
#include <stdbool.h>

#define BOARD_V             5 // PIC Vdd voltage
#define ADC_REF             BOARD_V  // Vdd as ref

#define ADC_MAX             1023 // ADC bits of resolution
#define IOC_VMIN            1.2 // @todo PIC issues an IOC on this min input voltage
#define ADC_STEP            ((ADC_REF * 1.0)/ADC_MAX)
#define VOLT_TO_ADC(volt)   (volt/ADC_STEP)

// The actual expected ADC reading in a range
#define IOC_ADC             (uint16_t)VOLT_TO_ADC(IOC_VMIN) // Minimum Vadc to cause IOC

#define BTN1_V              0.129
#define BTN2_V              0.256
#define BTN3_V              0.369

#define BTN1_ADC            (uint16_t)VOLT_TO_ADC((BTN1_V * 1.0))
#define BTN2_ADC            (uint16_t)VOLT_TO_ADC((BTN2_V * 1.0))
#define BTN3_ADC            (uint16_t)VOLT_TO_ADC((BTN3_V * 1.0))



typedef struct {
    bool btn1; // Shared
    bool btn2; // Shared
    bool btn3; // Shared
} INPUTS;

typedef enum {
    ADC_BOOST_NEW_VALUE,
    ADC_INPUT_NEW_VALUE,
    ADC_BTN_NEW_VALUE,
}ADC_STATES;


INPUTS inputs;
ADC_STATES adcState;

uint16_t adc_btn_result = 0;
uint16_t adc_input_result = 0;
bool ADC_BTN_TIME;

void btn_care();
void SampleSharedAuxInputs();
bool getBTN1();
bool getBTN2();
bool getBTN3();



#endif	/* HARDWARE_H */

