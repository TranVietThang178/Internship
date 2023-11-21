#include <stdio.h>
#include <stdlib.h>

int main() {
    char inputString[100];
    char resultString[100];

    printf("Enter the string: ");
    scanf("%s", inputString);

    int i = 0, j = 0;
    while (inputString[i] != '\0') {
        if ((inputString[i] >= 'a' && inputString[i] <= 'z') || (inputString[i] >= 'A' && inputString[i] <= 'Z')) {
            resultString[j] = inputString[i];
            j++;
        }
        i++;
    }
    resultString[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", resultString);

    return 0;
}
