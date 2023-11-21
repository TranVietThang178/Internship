#include <stdio.h>
#include <stdlib.h>

struct nhanvien
{
    char ten[50];
    unsigned long long id;
    double luong;
};

int main()
{
    struct nhanvien nv;

    printf("Name? ");
    scanf("%s", nv.ten);
    printf("\nID? ");
    scanf("%llu", &nv.id);
    printf("\nSalary? ");
    scanf("\n%lf", &nv.luong);

    printf("Your Name: %s\n", nv.ten);
    printf("Your ID: %llu\n", nv.id);
    printf("Your Salary: £%0.2lf\n", nv.luong);
    return 0;
}
