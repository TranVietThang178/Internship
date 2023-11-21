#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int random_number;
	printf("Please enter a number: ");
	scanf("%u", &random_number);

	if (random_number & 4) {
		printf("The third bit of %u is 1\n", random_number);
	} else {
		printf("The third bit of %u is 0\n", random_number);
	}
    return 0;
}
