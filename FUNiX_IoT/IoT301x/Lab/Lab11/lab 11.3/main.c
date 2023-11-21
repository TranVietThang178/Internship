#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {1,43,53,23,52,12,72,36,4,28};
    int *ptr;
    ptr = arr;
    int largest = *ptr;

    for (int i = 0; i < 10; i++)
    {
        if (largest < *(ptr+i))
        {
            largest = *(ptr+i);
        }
    }

    printf("The largest number is %d", largest);

    return 0;
}
