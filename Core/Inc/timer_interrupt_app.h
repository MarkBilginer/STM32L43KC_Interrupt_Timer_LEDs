/** @file timer_interrupt_app.h
 *  @brief Application layer functions.
 *
 *  Provides a layer of abstraction. Aim is to make the application portable,
 *  and separating the vendor dependence. Application layer makes use of the
 *  custom written functions in the library abstraction layer.
 *
 *  The functions config_timer() and setup_mcu() are helper functions.
 *
 *  A call to the function application() runs the application.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug Timer never stops, timer interrupt never stops.
 */

/* -- Define to prevent recursive inclusion -- */
#ifndef INC_TIMER_INTERRUPT_APP_H_
#define INC_TIMER_INTERRUPT_APP_H_

#ifdef __cplusplus
extern "C" {
#endif

/* -- Includes -- */

/* -- Library abstraction layer -- */
#include "STM32_timer_interrupt_lib.h"

/* -- Exported functions prototypes -- */

/** @brief Configures both timers controlling two external LEDs blinking rate.
 *
 *  Helper and wrapper function.
 *
 *  @param None
 *  @return None
 */
void config_timer(void);

/** @brief Setup necessary function of MCU.
 *
 *  Helper function.
 *
 *  @param None
 *  @return None
 */
void setup_mcu(void);

/** @brief The applications' entry point.
 *
 *  Calls helper and wrapper functions setup_mcu() and config_timer().
 *  In addition, starts interrupt for both timers in use.
 *
 *  @param None
 *  @return None
 */
void application(void);

/* -- Private defines -- */
/* None */

#ifdef __cplusplus
}
#endif

#endif /* INC_TIMER_INTERRUPT_APP_H_ */
