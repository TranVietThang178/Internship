#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
	printf("a = ");
	scanf("%f", &a);
	printf("\nb = ");
	scanf("%f", &b);
	printf("\nc = ");
	scanf("%f", &c);
	printf("\nd = ");
	scanf("%f", &d);

	printf("Average = (%0.1f + %0.1f + %0.1f + %0.1f)/4 = %0.2f", a, b, c, d, (a + b + c + d)/4);
    return 0;
}
