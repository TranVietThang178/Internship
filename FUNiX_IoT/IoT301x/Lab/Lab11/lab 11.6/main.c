#include <stdio.h>
#include <stdlib.h>

int add(int *ptr1, int *ptr2);

int main()
{
    int num1 = 17, num2 = 12, sum = 0;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    sum = add(ptr1,ptr2);
    printf("%d", sum);

    return 0;
}

int add(int *ptr1, int *ptr2)
{
    return (*ptr1 + *ptr2);
}
