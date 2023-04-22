#ifndef PinMode_PRJ_H_INCLUDED
	#define PinMode_PRJ_H_INCLUDED

#include "hwdefs.h"

/* Here you specify generic IO pins, i.e. digital input or outputs.
 * Inputs can be floating (INPUT_FLT), have a 30k pull-up (INPUT_PU)
 * or pull-down (INPUT_PD) or be an output (OUTPUT)
*/

#define DIG_IO_LIST \
    DIG_IO_ENTRY(charger_in_1,          GPIOB, GPIO7,  PinMode::INPUT_PD)   \
    DIG_IO_ENTRY(charger_in_2,          GPIOB, GPIO6,  PinMode::INPUT_PU)   \
    DIG_IO_ENTRY(car_in,                GPIOB, GPIO3,  PinMode::INPUT_FLT)  \
    DIG_IO_ENTRY(hv_req_out,            GPIOB, GPIO12, PinMode::OUTPUT)     \
    DIG_IO_ENTRY(charge_enable_out,     GPIOB, GPIO13, PinMode::OUTPUT)     \
    DIG_IO_ENTRY(hv_enable_out,         GPIOB, GPIO14, PinMode::OUTPUT)     \
    DIG_IO_ENTRY(led_out,               GPIOC, GPIO13, PinMode::OUTPUT)

#endif


 /* 
    DIG_IO_ENTRY(charger_in_1,          GPIOB, GPIO7,  PinMode::INPUT_FLT)   \ IN2 via resistor divider
    DIG_IO_ENTRY(charger_in_2,          GPIOB, GPIO6,  PinMode::INPUT_FLT)   \ IN1 via resistor divider
    DIG_IO_ENTRY(car_in,                GPIOB, GPIO3,  PinMode::INPUT_FLT)   \ IN3 via resistor divider
    DIG_IO_ENTRY(hv_req_out,            GPIOB, GPIO12, PinMode::OUTPUT)      \ OUT3 via low side switch controls HV request output
    DIG_IO_ENTRY(charge_enable_out,     GPIOB, GPIO13, PinMode::OUTPUT)      \ OUT2 via low side switch Charge Enable
    DIG_IO_ENTRY(hv_enable_out,         GPIOB, GPIO14, PinMode::OUTPUT)      \ OUT1 via low side switch controls HV_CON1 via RLY2
    DIG_IO_ENTRY(led_out,               GPIOC, GPIO13, PinMode::OUTPUT)
 */
