/*
 * main.c
 *
 *  Created on: 25 May 2021
 *      Author: mark
 */
/* Includes ------------------------------------------------------------------*/
#include "main.h"


/**
  * @brief  The application entry point.
  * @return int
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

