#include <stdio.h>
#include <stdlib.h>

void findFact();

int main()
{
    int num;
    unsigned long long fact;
    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &num);

    findFact(num, &fact);

    printf("Factorial of %d is : %llu\n", num, fact);

    return 0;
}

void findFact (int n, unsigned long long *f)
{
    int i;
    *f = 1;

    for (i = 1; i <= n; i++)
        *f *= i;
}
