#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main()
{
    char content[MAX];

    FILE *fptr = fopen("test.txt", "r");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fgets(content, MAX, fptr) != NULL) {
        printf("%s", content);
    }

    fclose(fptr);

    return 0;
}
