#include <stdio.h>
#include <stdlib.h>

void bubbleSort(char arr[][100], int n);

int main()
{
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);
    char arr[size][100];

    printf("Enter the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%s", arr[i]);
    }

    bubbleSort(arr, size);

    printf("Sorted string: ");
    for (int i = 0; i < size; i++)
    {
        printf("%s", arr[i]);
    }

    return 0;
}

void bubbleSort(char arr[][100], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcasecmp(arr[j], arr[j+1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}
