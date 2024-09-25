#include "Lab1.h"


void run_Lab1() {

	/* Infinite loop */
	HAL_TIM_Base_Start(&htim4);
	uint16_t currentTimerVal;
	while (1)
	{
		currentTimerVal = __HAL_TIM_GET_COUNTER(&htim4);
		if(!(currentTimerVal % 2000))
		{
			HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
			HAL_Delay(10);
			//while(!(__HAL_TIM_GET_COUNTER(&htim4) %1000))
			//{}
		}
	 }
}
