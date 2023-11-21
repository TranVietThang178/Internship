#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Number a = ");
	scanf("%d", &a);
	printf("Number b = ");
	scanf("%d", &b);

	printf("Average of a and b is %d\n", (a + b) >> 1);

	getchar();
	getchar();

	return 0;
}
