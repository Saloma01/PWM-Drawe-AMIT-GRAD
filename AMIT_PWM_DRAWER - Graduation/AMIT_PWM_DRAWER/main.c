/* 
 *                                                   ***** GRADUATION PROJECT FOR AMIT EMBEDDED SYSTEMS AVR DIPLOMA *****
 *                                                                         DEADLINE: 20/2/2024
 * AMIT_PWM_DRAWER.c
 *
 * Created: 2/14/2024 10:46:44 PM
 * Author : SALMA
 */ 

#include "PWM_Drawer_interface.h"

#include <util/delay.h>

const PWM_Config PWM_Setup[1] =
{
	{
		PWM_TIMER_0_CHANNEL,		 // PWM_ChannelType
		PWM_FAST,					// PWM MODE "TIMERS"
		PWM_PRESCALE_256,		   // PWM_ClockPrescaleType
		PWM_INVERTED,			  // PWM_OutputState
		8U, 					 // Prescale_Value
		20U						// Duty Cycle Percentage
	}
};


int main(void)
{
	PWMDrawer_Init();
	PWM_Signal_SetUp Signal_Data = {0, 0, 0, 0, 0};
	f32 Scale_ms = 0.25;
	
	while(1)
	{
		
		PWM_MeasureSignal(&Signal_Data);
		Scale_ms=((Signal_Data.Period_Time_ms) / 5);
		PWM_DrawSignal(&Signal_Data, Scale_ms);
		_delay_ms(1000);
	}
}

