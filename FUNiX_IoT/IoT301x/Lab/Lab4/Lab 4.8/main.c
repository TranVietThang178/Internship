#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
	printf("a = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	printf("\nc = ");
	scanf("%d", &c);
	printf("\nd = ");
	scanf("%d", &d);

	printf("(%d)^2 = %d\n", a, a*a);
	printf("(%d)^2 = %d\n", b, b*b);
	printf("(%d)^2 = %d\n", c, c*c);
	printf("(%d)^2 = %d\n", d, d*d);
    return 0;
}
