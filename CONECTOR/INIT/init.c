/**
  ******************************************************************************
  * @file   
  * @author  xjc
  * @version v1.0
  * @date    
  * @brief   
  ******************************************************************************
  */
#include "init.h"

void World_Init(void)
{
	SystemInit();
	uart_init(115200);
	printf("usart is ready\r\n");
	SysTick_Init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

	#ifdef SX1278_COMMUNICATION
	SX1278_Init();
	#endif
	
	LED_Init();
	OLED_Init();
	GUI_Init();
	Key_Init();
	TIM3_Init();
	TIM4_Init();
	TIM5_Init();
	
	
	JOY_ADC_Init();
}

