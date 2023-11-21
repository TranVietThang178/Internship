#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int random_number;
	printf("Please enter a number: ");
	scanf("%u", &random_number);

	random_number = random_number | (1 << 4);
	printf("The number when the fifth bit is 1 is: %u\n", random_number);

    return 0;
}
