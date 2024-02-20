//LIB BY: SALMA

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "STD_TYPES.h"


#define F_CPU								(16000000UL)


							                       /************ DIO Module ************/

#define PORTA_OUT_REG						((volatile u8*)0x3BU)
#define PORTA_DIR_REG						((volatile u8*)0x3AU)
#define PORTA_INP_REG						((volatile u8*)0x39U)

#define PORTB_OUT_REG						((volatile u8*)0x38U)
#define PORTB_DIR_REG						((volatile u8*)0x37U)
#define PORTB_INP_REG						((volatile u8*)0x36U)

#define PORTC_OUT_REG						((volatile u8*)0x35U)
#define PORTC_DIR_REG						((volatile u8*)0x34U)
#define PORTC_INP_REG						((volatile u8*)0x33U)

#define PORTD_OUT_REG						((volatile u8*)0x32U)
#define PORTD_DIR_REG						((volatile u8*)0x31U)
#define PORTD_INP_REG						((volatile u8*)0x30U)



				                              /************ Global Interrupts Module ************/
				
#define STATUS_REG							((volatile u8*)0x5FU)

					                        	/************ Shared Timers ************/
						
#define TIMERS_INT_MASK_REG					((volatile u8*)0x59U)
#define TIMERS_INT_FLAG_REG					((volatile u8*)0x58U)


					                        /************ Timer 0 Addresses ************/                          

#define TIMER0_CTRL_REG						((volatile u8*)0x53U)
#define TIMER0_CNTR_REG						((volatile u8*)0x52U)
#define TIMER0_CMP_REG						((volatile u8*)0x5CU)


					                       /************ Timer 1  Addresses ************/                        

#define TIMER1_CTRL_REG_A					((volatile u8*)0x4FU)
#define TIMER1_CTRL_REG_B					((volatile u8*)0x4EU)
#define TIMER1_CNTR_REG_H					((volatile u8*)0x4DU)
#define TIMER1_CNTR_REG_L					((volatile u8*)0x4CU)
#define TIMER1_CMP_A_REG_H					((volatile u8*)0x4BU)
#define TIMER1_CMP_A_REG_L					((volatile u8*)0x4AU)
#define TIMER1_CMP_B_REG_H					((volatile u8*)0x49U)
#define TIMER1_CMP_B_REG_L					((volatile u8*)0x48U)
#define TIMER1_INP_CAPT_REG_H				((volatile u8*)0x47U)
#define TIMER1_INP_CAPT_REG_L				((volatile u8*)0x46U)


					                       /************ Timer 2  Addresses ************/                          

#define TIMER2_CTRL_REG						((volatile u8*)0x45U)
#define TIMER2_CNTR_REG						((volatile u8*)0x44U)
#define TIMER2_CMP_REG						((volatile u8*)0x43U)


#endif /* REGISTERS_H_ */