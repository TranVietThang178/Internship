#include <stdio.h>

int main(void) {
	float dai,rong;

	printf("Chieu dai: ");
	scanf("%f", &dai);
	printf("Chieu rong: ");
	scanf("%f", &rong);
	printf("Chu vi hinh chu nhat la: %0.2f\n", (dai + rong)*2);
	printf("Dien tich hinh chu nhat la: %0.2f\n", dai * rong);

	getchar();
	getchar();

	return 0;

}
