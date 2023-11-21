#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool compare(const char str1[], const char str2[]);

int main()
{
    char str1[] = "World";
    char str2[] = "World";

    printf("\n%d\n", compare(str1,str2));
    return 0;
}

bool compare(const char str1[], const char str2[])
{
    int i = 0;
    char *ptr1 = str1;
    char *ptr2 = str2;
    bool isEqual = false;

    while (*(ptr1 + i) == *(ptr2 + i) &&
           *(ptr1 + i) != '\0' &&
           *(ptr2 + i) != '\0')
        ++i;

    if (*(ptr1 + i) == '\0' && *(ptr2 + i) == '\0')
        isEqual = true;
    else
        isEqual = false;
    return isEqual;
}
