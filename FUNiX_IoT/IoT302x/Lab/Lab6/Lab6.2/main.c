#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);

	int A = a++ + ++a;
	int B = --a - b-- * ++c;

	printf("A = %d\n", A);
	printf("B = %d\n", B);

	getchar();
	getchar();

	return 0;
}
