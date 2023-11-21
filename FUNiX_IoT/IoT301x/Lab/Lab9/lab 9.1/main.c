#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int arr_length(int arr[], int size);
void connectStrings(char result[], const char string1[], const char string2[]);
bool checkStrings(const char str[], const char str2[]);

int main()
{
    int total;
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char result[100];
    const char string1[] = "Hello";
    const char string2[] = "World";
    const char string3[] = "World";
    const char string4[] = "Worlds";

    connectStrings(result,string1,string2);
    total = arr_length(arr, sizeof(arr)/sizeof(arr[0]));

    printf("%d\n", total);
    printf("%s\n", result);
    if (checkStrings(string2,string4)) {
        printf("Two strings matched");
    } else
    {
        printf("Two strings do not match each other");
    }

    return 0;
}

int arr_length(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
    }
    return count;
}

void connectStrings(char result[], const char string1[], const char string2[])
{
    int len1 = strlen(string1);
    int len2 = strlen(string2);

    int index = 0;

    for (int i = 0; i < len1; i++){
        result[index] = string1[i];
        index++;
    }

    for (int i = 0; i < len2; i++)
    {
        result[index] = string2[i];
        index++;
    }

    result[index] = '\0';
}

bool checkStrings (const char str[], const char str2[])
{
    int i = 0;
    while (str[i] != '\0' && str2[i] != '\0' && str[i] == str2[i])
    {
        i++;
    }

    return (str[i] == '\0' && str2[i] == '\0');
}
