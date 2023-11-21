#include <stdio.h>

int main(void)
{
	int input;
	printf("Enter the input: ");
	scanf("%d", &input);

	switch (input) {
	 	case 0x01:
	 		printf("Device: Board STM32F4 Nucleo\n");
	 		printf("Serial: BSTM32F4_NUCLEO\n");
	 		printf("Extended kit: \n");
	 		printf("- 5 buttons\n");
	 		printf("- 6 RGB leds\n");
	 		printf("- 1 buzzer\n");
	 		printf("- 1 Temp-Humid sensor\n");
	 		printf("- 1 Light intensity sensor\n");
	 		printf("- 1 LCD\n");
	 		break;
		case 0x02:
			printf("Led 1 is ON\n");
			break;
		case 0x03:
			printf("Led 1 is OFF\n");
			break;
		case 0x04:
			printf("Buzzer is ON\n");
			break;
		case 0x05:
			printf("Buzzer is OFF\n");
			break;
		case 0x06:
			printf("Humidity is 89\n");
			break;
		case 0x07:
			printf("Temperate is 32 degree Celcius\n");
		case 0x08:
			printf("Light intensity is 26 lux\n");
			break;
		case 0x09:
			printf("Device Management program");
			break;
		default:
			printf("Not supported!");
			break;
	}

	getchar();
	getchar();

	return 0;
}
