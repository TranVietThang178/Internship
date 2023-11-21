#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1 = 17;
    float num2 = 8;
    char string[] = "Thang";

    int *int_pointer;
    float *float_pointer;
    char *char_pointer;

    int_pointer = &num1;
    float_pointer = &num2;
    char_pointer = string;

    printf("%d\n", *int_pointer);
    printf("%p\n", &int_pointer);
    printf("%0.1f\n", *float_pointer);
    printf("%p\n", &float_pointer);
    printf("%s\n", char_pointer);
    printf("%p\n", &char_pointer);

    return 0;
}
