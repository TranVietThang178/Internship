#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char: %llu\n", sizeof(char));
	printf("int: %llu\n", sizeof(int));
	printf("long: %llu\n", sizeof(long));
	printf("long long: %llu\n", sizeof(long long));
	printf("float: %llu\n", sizeof(float));
	printf("double: %llu\n", sizeof(double));
    return 0;
}
