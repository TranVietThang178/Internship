#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int age;
    float salary;

    FILE *fptr;

    fptr = fopen("test.txt", "w");

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your salary: ");
    scanf("%f", &salary);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "Salary: $%0.2f\n", salary);
    fclose(fptr);
    return 0;
}
