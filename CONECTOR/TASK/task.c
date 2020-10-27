/**
  ******************************************************************************
  * @file   
  * @author  xjc
  * @version v1.0
  * @date    
  * @brief   
  ******************************************************************************
  */
#include "task.h"

void Task_30ms(void)
{
	GUI_ADC_Updata();
#ifdef UART_COMMUNICATION                   //����ˢ�º����ڷ��ͺ����ڲ� Ϊȷ������ˢ������ ˢ�º����ڷ��ͺ� ����ǰ
	
	Uart_Transmit();
	
#endif
		
#ifdef SX1278_COMMUNICATION
	
	SX1278_Transmit();
	
#endif
	
#ifdef UART_DEBUG
	
	Uart_Debug_Transmit();
	
#endif

}

void Task_500ms(void)
{
	LED_Task();
	
}



