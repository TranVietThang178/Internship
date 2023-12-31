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
#include <stm32f401re_i2c.h>
#include <temhumsensor.h>
#include <timer.h>
#include <Ucglib.h>
#include <string.h>
#include <stdio.h>

#define CYCLE_SEND_DATA 1000 //ms

static uint32_t time_current, time_initial, time_total;
static uint8_t temperature, humidity;
static ucg_t ucg;
static char src1[20] = "";
static char src2[20] = "";

void processGetValueSensor(void);

int main(void)
{
	SystemCoreClockUpdate();
	TimerInit();
	TemHumSensor_Init();
	Ucglib4WireSWSPI_begin(&ucg, UCG_FONT_MODE_SOLID);
	ucg_ClearScreen(&ucg);
	ucg_SetFont(&ucg, ucg_font_ncenR12_hr);
	ucg_SetColor(&ucg, 0, 255, 255, 255);
	ucg_SetColor(&ucg, 1, 0, 0, 0);
	ucg_SetRotate180(&ucg);
	time_initial = GetMilSecTick();

	while(1)
	{
		processGetValueSensor();
		processTimerScheduler();
	}
}

void processGetValueSensor(void)
{
	time_current = GetMilSecTick();

	if(time_current >= time_initial)
	{
		time_total += time_current - time_initial;
	}
	else
	{
		time_total += 0xFFFFFFFFU - time_current + time_initial;
	}
	if (time_total >= CYCLE_SEND_DATA) {
		time_total = 0;
		temperature = (uint8_t)(TemHumSensor_GetTemp() / 100);
		humidity = (uint8_t)(TemHumSensor_GetHumi() /100);

		memset(src1, 0, sizeof(src1));
		sprintf(src1, "Temp = %d oC", temperature);
		ucg_DrawString(&ucg, 0, 32, 0, src1);

		memset(src2, 0,sizeof(src2));
		sprintf(src2, "Humi = %d %%", humidity);
		ucg_DrawString(&ucg, 0, 52, 0, src2);

	}
	time_initial = time_current;
}
