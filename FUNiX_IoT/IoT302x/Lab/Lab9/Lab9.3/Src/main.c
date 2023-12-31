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
#include <system_stm32f4xx.h>
#include <button.h>
#include <led.h>

uint8_t buttonCnt;

void delay_ms (uint32_t milisecond);
uint8_t ButtonCalculateNumOfPress(void);
void ButtonHandlerEventPress(uint8_t button_id);

int main(void)
{
	LedControl_Init();
	Button_Init();

	while(1)
	{
		ButtonHandlerEventPress(BUTTON_BOARD_ID);
	}
}

void delay_ms (uint32_t milisecond)
{
	for (uint32_t i = 0; i < milisecond; i++)
	{
		for (uint32_t j = 0; j < 5000; j++);
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

void ButtonHandlerEventPress(uint8_t button_id)
{
	uint8_t event;

	event = ButtonCalculateNumOfPress();

	switch (button_id)
	{
	case BUTTON_BOARD_ID:
		if (event == 1) {
			LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 100);
			delay_ms(500);
			LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 0);
		}
		else if (event == 2)
		{
			for (uint8_t i = 0; i < 2; i++) {
				LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 100);
				delay_ms(1000);
				LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 0);
				delay_ms(1000);
			}
		}
		else if (event == 3) {
			for (uint8_t i = 0; i < 3; i++)
			{
				LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 100);
				delay_ms(2000);
				LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 0);
				delay_ms(2000);
			}

		}
		else if(event == 4)
		{
			for (uint8_t i = 0; i < 4; i++)
			{
				LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 100);
				delay_ms(2000);
				LedControl_SetColorIndividual(LED_BOARD_ID, LED_COLOR_GREEN, 0);
				delay_ms(2000);
			}
		}
		buttonCnt = 0;
		break;

	default:
		break;
	}
}
