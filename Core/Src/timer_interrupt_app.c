/*
 * timer_interrupt_app.c
 *
 *  Created on: 25 May 2021
 *      Author: mark
 */

#include "timer_interrupt_app.h"

void config_timer(void)
{
	init_tim1(1000, TIM_COUNTERMODE_UP, 3200, TIM_CLOCKDIVISION_DIV1,
			0, TIM_AUTORELOAD_PRELOAD_ENABLE);
	init_tim2(1000, TIM_COUNTERMODE_UP, 64000, TIM_CLOCKDIVISION_DIV1,
			TIM_AUTORELOAD_PRELOAD_ENABLE);
}
