#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main()
{
    int count = 0;
    char content;

    FILE *file = fopen("..\\lab 13.1\\test.txt", "r");

    if (file != NULL) {
        while ((content=fgetc(file))!= EOF)
        {
            if (content == '\n')
            {
                count++;
            }
        }
    }
    else
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Total number of lines are: %d\n", count);


    fclose(file);
    return 0;
}
