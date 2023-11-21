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
#include "timer.h"
#include "Ucglib.h"

static ucg_t ucg;

void AppInitCommon(void);

int main(void)
{
	AppInitCommon();

	while(1){
		processTimerScheduler();
	}
}

void AppInitCommon(void) {
	TimerInit();// Khởi tạo timer để cho phép timer hoạt động và thực thi các câu lệnh hiển thị dữ liệu lên màn hình LCD.
	Ucglib4WireSWSPI_begin(&ucg, UCG_FONT_MODE_SOLID); // Cấu hình các chân giao tiếp SPI của STM32 với màn hình LCD.
	ucg_ClearScreen(&ucg); // Xóa màn hình hiển thị LCD.
	ucg_SetFont(&ucg, ucg_font_ncenR12_hr); // Cài đặt font chữ kiểu ncenR12_hr để hiển thị.
	ucg_SetColor(&ucg, 0, 255, 255, 255); // Set màu trắng cho text hiển thị.
	ucg_SetColor(&ucg, 1, 0, 0, 0); // Set màu đen cho nền hiển thị (background).
	ucg_SetRotate180(&ucg); // Xoay màn hình một góc 180 độ.
	//ucg_DrawString(&ucg, 60, 24, 0, "*"); // Vẽ hình * có tọa độ hàng ngang LCD là 60, hàng dọc LCD là 24, có chiều hiển thị là 0 từ trái sang phải của màn hình.

	for (int i = 3; i < 10; i++) {
		for (int j = 5; j < 10; j++) {
			ucg_DrawString(&ucg, 10 * i, 10 * j, 0, "*");
		}


	}
}
