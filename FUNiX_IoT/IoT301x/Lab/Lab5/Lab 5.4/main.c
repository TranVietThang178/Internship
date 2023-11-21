#include <stdio.h>
#include <stdlib.h>
#define BASE_SALARY 12.00

int main()
{
    float work_hours, gross_sal, tax;
    printf("Your hours of working are: ");
    scanf("%f", &work_hours);

    if (work_hours <= 40) {
        gross_sal = work_hours * BASE_SALARY;
        printf("Your gross salary is: $%0.2f\n", gross_sal);
    } else {
        gross_sal = work_hours * BASE_SALARY * 1.5;
        printf("Your gross salary is: $%0.2f\n", gross_sal);
    }

    if (gross_sal <= 300) {
        tax = gross_sal * 0.15;
        printf("The tax you have to pay is $%0.2f\n", tax);
    } else if (gross_sal > 300 && gross_sal <= 450) {
        tax = gross_sal * 0.2;
        printf("The tax you have to pay is $%0.2f\n", tax);
    } else {
        tax = gross_sal * 0.25;
        printf("The tax you have to pay is $%0.2f\n", tax);
    }

    printf("Your net salary will be $%0.2f\n", gross_sal - tax);
    return 0;
}
