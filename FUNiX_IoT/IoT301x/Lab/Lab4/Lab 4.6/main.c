#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstnum, secondnum;

    printf("Please enter the first num: ");
    scanf("%f", &firstnum);
    printf("Please enter the second num: ");
    scanf("%f", &secondnum);

    printf("The result is %f", firstnum / secondnum);
    return 0;
}
