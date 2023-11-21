#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 178;
    int *ptr = (int *)&num;
    *ptr = 10;

    printf("%d", num);
    return 0;
}
