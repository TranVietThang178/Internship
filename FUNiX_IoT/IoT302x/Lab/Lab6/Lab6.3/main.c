#include <stdio.h>

int main(void)
{
	int a, b, c, max;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);

	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	if (a == b && b == c) {
		printf("All three numbers are equal: %d", max);
	} else {
		printf("The highest number is: %d", max);
	}

	getchar();
	getchar();

	return 0;
}
