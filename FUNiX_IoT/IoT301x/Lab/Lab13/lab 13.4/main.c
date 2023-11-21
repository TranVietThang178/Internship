#include <stdio.h>
#include <stdlib.h>

int main()
{
    char file1content[10000];
    char file2content[10000];
    char mergedcontent[20000];

    FILE *file1 = fopen("test1.txt", "r");
    FILE *file2 = fopen("test2.txt", "r");

    if (file1 == NULL || file2 == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    if (fgets(file1content, sizeof(file1content), file1) == NULL)
    {
        printf("Error reading from the file 1\n");
    }
    if (fgets(file2content, sizeof(file2content), file2) == NULL)
    {
        printf("Error reading from the file 2\n");
    }

    fclose(file1);
    fclose(file2);

    strcpy(mergedcontent, file1content);
    strcat(mergedcontent, file2content);

    FILE *newFile = fopen("mergedFile.txt", "w");

    if (newFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fputs(mergedcontent, newFile);

    fclose(newFile);

    return 0;
}
