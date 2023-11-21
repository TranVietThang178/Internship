#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[] = "Thang";
    char *ptr;
    ptr = string;

    int i = 0;
    int j;

    while (*(ptr)!='\0')
    {
        i++;
        ptr++;
    }
    ptr--;

    for (j=i-1; j>=0;j--)
    {
        printf("%c",*(ptr--));
    }
    return 0;
}
