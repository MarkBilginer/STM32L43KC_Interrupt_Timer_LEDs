/** @file timer_interrupt_app.c
 *  @brief Application helper and wrapper functions.
 *
 *  This file contains the applications' helper and wrapper functions.
 *  Aims to make the code more readable. Application layer,
 *  library layer and driver layer concept was in mind.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug No known bugs.
 */

#include "timer_interrupt_app.h"


void config_timer(void)
{
	init_tim1(1000, TIM_COUNTERMODE_UP, 3200, TIM_CLOCKDIVISION_DIV1,
			0, TIM_AUTORELOAD_PRELOAD_ENABLE);
	init_tim2(1000, TIM_COUNTERMODE_UP, 64000, TIM_CLOCKDIVISION_DIV1,
			TIM_AUTORELOAD_PRELOAD_ENABLE);
}

void setup_mcu(void)
{
	/* Reset of all peripherals, Initializes the Flash interface and the Systick.*/
	init_hal();

	/* Configure the system clock */
	config_system_clock();

	/* Initialize all configured peripherals */
	init_gpio();
	init_uart(115200);
	config_timer();

}

void application(void)
{
	setup_mcu();

	tim_base_start_interrupt();
}
