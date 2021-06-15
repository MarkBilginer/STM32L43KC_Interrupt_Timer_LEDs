/*
 * STM32_timer_interrupt_lib.h
 *
 *  Created on: 25 May 2021
 *      Author: mark
 */

#ifndef INC_STM32_TIMER_INTERRUPT_LIB_H_
#define INC_STM32_TIMER_INTERRUPT_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"


/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);
void init_hal(void);
void config_system_clock(void);
void init_gpio(void);
void init_uart(uint32_t baudrate);
void tim_base_start_interrupt(void);
void init_tim1(uint32_t prescaler, uint32_t cnt_mode, uint32_t period,
		uint32_t clk_div, uint32_t rep_cnt, uint32_t auto_re_pre);
void init_tim2(uint32_t prescaler, uint32_t cnt_mode, uint32_t period,
		uint32_t clk_div, uint32_t auto_re_pre);

/* Private defines -----------------------------------------------------------*/
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define LD3_Pin GPIO_PIN_3
#define LD3_GPIO_Port GPIOB

#ifdef __cplusplus
}
#endif

#endif /* INC_STM32_TIMER_INTERRUPT_LIB_H_ */
