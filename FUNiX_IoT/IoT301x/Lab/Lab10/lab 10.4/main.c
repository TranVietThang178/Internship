#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    int *ptr1 = (int*)&num1;
    int *ptr2 = (int*)&num2;

    printf("First number is: ");
    scanf("%d", ptr1);
    printf("Second number is: ");
    scanf("%d", ptr2);
    printf("Sum of two numbers is %d\n",(*ptr1)+(*ptr2));

    return 0;
}
