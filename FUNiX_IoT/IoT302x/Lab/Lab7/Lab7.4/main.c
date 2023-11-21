#include <stdio.h>

int main(void){
	int temperature, humidity;

	printf("Temp: ");
	scanf("%d", &temperature);
	printf("Humid: ");
	scanf("%d", &humidity);

	if (temperature < 30) {
		printf("Cooling mode ON\n");
	} else
	{
		printf("Cooling mode OFF\n");
	}

	if (humidity > 70) {
		printf("Fan mode ON\n");
	} else
	{
		printf("Fan mode OFF\n");
	}

	getchar();
	getchar();

	return 0;
}
