#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
	printf("a = ");
	scanf("%f", &a);
	printf("\nb = ");
	scanf("%f", &b);

	if((a != (int)a) || (b != (int)b)) {
		printf("The inputs are not integers\n");
	} else {
		if (a > b) {
			printf("a is larger than b.\n");
		} else if (a < b) {
			printf("a is smaller than b.\n");
		} else {
			printf("a is equal to b.\n");
		}
	}
    return 0;
}
