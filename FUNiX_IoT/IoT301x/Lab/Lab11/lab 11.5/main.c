#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[6] = {0, 1, 2, 3, 4, 5};
    int arr2[3] = {6, 7, 8};
    int *ptr1;
    int *ptr2;
    int temp;

    ptr1 = arr1;
    ptr2 = arr2;

    printf("Array 1 before: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\nArray 2 before: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr2[i]);
    }

    for (int i = 0; i < 3; i++) {
        temp = *(ptr2 + i);
        *(ptr2 + i) = *(ptr1 + i);
        *(ptr1 + i) = temp;
    }

    printf("\nArray 1 after: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\nArray 2 after: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr2[i]);
    }

    return 0;
}







