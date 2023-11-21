#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 17, num2 = 12;
    int *ptr1 = (int*)&num1;
    int *ptr2 = (int*)&num2;

    if (*ptr1 > *ptr2)
    {
        printf("%d is larger", *ptr1);
    }
    else if (*ptr1 < *ptr2)
    {
        printf("%d is larger", *ptr2);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}
