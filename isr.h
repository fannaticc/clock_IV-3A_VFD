/* 
 * File:   isr.h
 * Author: Raphael
 *
 * Created on October 7, 2019, 9:29 AM
 */

#ifndef ISR_H
#define	ISR_H

#include <stdbool.h>

typedef struct {
    bool buttonsIOC : 1;
    bool auxSharedIOC : 1;
    bool auxDedicatedIOC : 1;
    bool TMR1OVF : 1;
} INTERRUPTS;

INTERRUPTS flags;

#endif	/* ISR_H */

