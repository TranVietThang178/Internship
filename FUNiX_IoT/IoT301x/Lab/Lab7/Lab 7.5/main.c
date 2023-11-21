#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {12, 43, 24, 54, 65, 23, 95, 92, 85};
    int temp;

    printf("Descending order: \n");
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }

    printf("\nAscending order: \n");
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
