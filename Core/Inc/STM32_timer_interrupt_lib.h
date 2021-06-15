/** @file STM32_timer_interrupt_lib.h.h
 *  @brief Library layer functions.
 *
 *  Provides a layer of abstraction. Aim is to make the application portable,
 *  and separating the vendor dependence. The library layer wraps around the
 *  vendor specific driver layer.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug Timer never stops, timer interrupt never stops.
 */

/* -- Define to prevent recursive inclusion -- */
#ifndef INC_STM32_TIMER_INTERRUPT_LIB_H_
#define INC_STM32_TIMER_INTERRUPT_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

/* -- Includes -- */

/* -- Vendor specific Hardware Abstraction layer -- */
#include "stm32l4xx_hal.h"

/* -- Exported functions prototypes -- */

/** @brief  This function is executed in case of error occurrence.
 *  @param None
 *  @return None
*/
void Error_Handler(void);

/** @brief  Initializes the Hardware Abstraction Layer of STM32.
 *
 *  Wrapper function. Calls the vendor specific function HAL_Init().
 *
 *  @param None
 *  @return None
*/
void init_hal(void);

/** @brief System Clock Configuration.
 *  @param None
 *  @return None
 */
void config_system_clock(void);

/** @brief GPIO Initialization Function.
 *  @param None
 *  @return None
 */
void init_gpio(void);

/** @brief UART initialization.
 *
 *  Wrapper function. Takes global variable of UART as input. Type of global
 *  variable: UART_HandleTypeDef.
 *
 *  @param baudrate rate of information transmission.
 *  @return None
 */
void init_uart(uint32_t baudrate);

/** @brief TIM1 initialization.
 *
 *  Wrapper function. Takes global variable of TIM1 as input.
 *  Type of global variable: TIM_HandleTypeDef.
 *
 *  @param prescaler Prescaler of TIM1.
 *  @param cnt_mode Counting mode of TIM1.
 *  @param period Period of TIM1.
 *  @param clk_div Clock division of TIM1.
 *  @param rep_cnt Repetition counter of TIM1.
 *  @param auto_re_pre Auto reload preload mode of TIM1.
 *  @return None
 */
void init_tim1(uint32_t prescaler, uint32_t cnt_mode, uint32_t period,
		uint32_t clk_div, uint32_t rep_cnt, uint32_t auto_re_pre);

/** @brief TIM2 initialization.
 *
 *  Wrapper function. Takes global variable of TIM2 as input.
 *  Type of global variable: TIM_HandleTypeDef.
 *
 *  @param prescaler Prescaler of TIM2.
 *  @param cnt_mode Counting mode of TIM2.
 *  @param period Period of TIM2.
 *  @param clk_div Clock division of TIM2.
 *  @param auto_re_pre Auto reload preload mode of TIM2.
 *  @return None
 */
void init_tim2(uint32_t prescaler, uint32_t cnt_mode, uint32_t period,
		uint32_t clk_div, uint32_t auto_re_pre);

/** @brief Starts the timers' interrupt mode in non-blocking mode.
 *
 *  Wrapper function. Takes global variable of TIM1 and Tim2 as input.
 *  Type of global variables: TIM_HandleTypeDef.
 *
 *  @param None
 *  @return None
 */
void tim_base_start_interrupt(void);

/* -- Private defines -- */
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
