//
// Created by username on 24-7-23.
//

#ifndef __DELAY_H
#define __DELAY_H
// #include "stm32f10x.h"
#include "stm32f1xx_hal.h"
#include <stdint.h>
void Delay_us(uint32_t us);
void Delay_ms(uint32_t ms);
void Delay_s(uint32_t s);

#endif
