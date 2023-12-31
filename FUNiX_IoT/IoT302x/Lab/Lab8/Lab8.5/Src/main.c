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
#include <stm32f401re_adc.h>
#include <lightsensor.h>
#include <Ucglib.h>
#include <string.h>
#include <stdio.h>

#define CYCLE_SEND_DATA	1000//ms

static uint32_t time_current, time_initial, time_total;
static uint16_t light;
static ucg_t ucg;
static char src3[20] = "";

uint16_t LightSensor_pollingRead(void);
void processGetValueSensor(void);

int main(void)
{
	SystemCoreClockUpdate();
	TimerInit();
	LightSensor_Init(ADC_READ_MODE_POLLING);
	Ucglib4WireSWSPI_begin(&ucg, UCG_FONT_MODE_SOLID);
	time_initial = GetMilSecTick();
	ucg_ClearScreen(&ucg);
	ucg_SetFont(&ucg, ucg_font_ncenR12_hr);
	ucg_SetColor(&ucg, 0, 255, 255, 255);
	ucg_SetColor(&ucg, 1, 0, 0, 0);
	ucg_SetRotate180(&ucg);

	while(1)
	{
		processGetValueSensor();
		processTimerScheduler();
	}
}

uint16_t LightSensor_pollingRead(void)
{
	uint16_t result = 0;

	ADC_SoftwareStartConv(ADCx_SENSOR);

	while (ADC_GetFlagStatus(ADCx_SENSOR, ADC_FLAG_EOC)) {}

	result = ADC_GetConversionValue(ADCx_SENSOR);

	return result;
}

void processGetValueSensor(void)
{
	time_current = GetMilSecTick();

	if (time_current >= time_initial)
		time_total += time_current - time_initial;
	else
		time_total += 0xFFFFFFFFU - time_current + time_initial;

	if (time_total >= CYCLE_SEND_DATA)
	{
		time_total = 0;
		light = LightSensor_pollingRead();

		memset(src3, 0, sizeof(src3));
		sprintf(src3, "Light = %d lux", light);
		ucg_DrawString(&ucg, 0, 32, 0, src3);
	}
	time_initial = time_current;
}
