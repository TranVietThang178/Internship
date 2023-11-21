#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 17, num2 = 12;
    int *ptr1 = (int*)&num1;
    int *ptr2 = (int*)&num2;

    printf("The two numbers before: %d & %d\n", *ptr1, *ptr2);

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("The two numbers after: %d & %d\n", *ptr1, *ptr2);

    return 0;
}
