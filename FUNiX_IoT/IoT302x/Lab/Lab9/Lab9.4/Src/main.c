/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <button.h>
#include <buzzer.h>

#define BUZZER_SET_ON 0xFFu
#define BUZZER_SET_OFF 0x00u

uint8_t buttonCnt;

void delay_ms(uint32_t milisecond);
uint8_t ButtonCalculateNumOfPress(void);

int main(void)
{

}

void delay_ms(uint32_t milisecond)
{
	for(uint32_t i = 0; i < milisecond; i++)
	{
		for (uint32_t j =0; j < 5000; j++);
	}
}

uint8_t ButtonCalculateNumOfPress(void)
{
	uint32_t count = 0;

	for(count = 0; count < 2000000; count++)
	{
		if (Button_GetLogicInputPin(BUTTON_BOARD_ID) == 0)
		{
			while (Button_GetLogicInputPin(BUTTON_BOARD_ID) == 0) {}
			buttonCnt++;
		}
	}
	return buttonCnt;
}

void BuzzerSetLogic(uint8_t buzzer_state)
{
	if ((buzzer_state != 0xFF) && (buzzer_state != 0x00))
		return;
	if (buzzer_state == BUZZER_SET_ON)
	{
		BuzzerControl_SetDutyCycle(20);
	}
	else
	{
		BuzzerControl_SetDutyCycle(0);
	}
}
