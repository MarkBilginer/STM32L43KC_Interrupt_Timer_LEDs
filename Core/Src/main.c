/** @file main.c
 *  @brief Application entry point.
 *
 *  This file contains the applications' main() function.
 *
 *  This is the entry point for the application.
 *  Application name is STM32_Interrupt_Timer_LEDs.
 *  What the Application does? Toggles external two
 *  LEDs on and of at two different intervals, 0.1s and
 *  1s.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug No known bugs.
 */

/* -- Includes -- */
#include "main.h"

/** @brief Application entry point.
 *
 *  This is the entry point for your Application.
 *  You will use this to test and debug your
 *  application.
 *
 * @todo timer base and interrupt to be stopped.
 * @return Should not return.
 */
int main(void)
{
	application();
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

