/**
  ******************************************************************************
  * @file    led
  * @author  xjc
  * @version v1.0
  * @date    
  * @brief   
  ******************************************************************************
  */
#include "led.h"
#include "systick.h"

/**
  * @brief  
  * @param  
  * @retval 
  */
void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_Init_Structure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_Init_Structure.GPIO_Pin   = GPIO_Pin_8 | GPIO_Pin_9;
	GPIO_Init_Structure.GPIO_Mode  = GPIO_Mode_Out_PP;
	GPIO_Init_Structure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Init_Structure);
	
	GPIO_SetBits(GPIOB,GPIO_Pin_8);
	GPIO_ResetBits(GPIOB,GPIO_Pin_9);
}

void LED_Task(void)
{
	if(0 == LED0)
	{
		LED0 = 1;
	}
	else
	{
		LED0 = 0;
	}
	if(0 == LED1)
	{
		LED1 = 1;
	}
	else
	{
		LED1 = 0;
	}
}

