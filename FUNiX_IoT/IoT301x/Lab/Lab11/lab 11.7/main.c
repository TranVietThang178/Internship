#include <stdio.h>
#include <stdlib.h>

int exchange(int *ptr1, int *ptr2);

int main()
{
    int num1 = 17, num2 = 12;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Two numbers before: %d & %d\n", *ptr1, *ptr2);

    exchange(ptr1,ptr2);

    printf("Two numbers after: %d & %d\n", *ptr1, *ptr2);

    return 0;
}

int exchange(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
