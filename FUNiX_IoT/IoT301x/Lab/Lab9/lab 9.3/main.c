#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char mainString[100], subString[100];

    printf("Enter the main string: ");
    scanf("%s", mainString);

    printf("Enter the sub string: ");
    scanf("%s", subString);

    int s1 = 0, s2 = 0;

    while (mainString[s1] != '\0')
        s1++;

    while (subString[s2] != '\0')
        s2++;

    bool substringFound = false;

    for (int i = 0; i <= s1 - s2; i++) {
        int j;
        for (j = 0; j < s2; j++) {
            if (mainString[i + j] != subString[j]) {
                break;
            }
        }

        if (j == s2) {

            substringFound = true;
            break;
        }
    }

    if (substringFound) {
        printf("The substring \"%s\" appears in the main string \"%s\".\n", subString, mainString);
    } else {
        printf("The substring \"%s\" does NOT appear in the main string \"%s\".\n", subString, mainString);
    }
    return 0;
}
