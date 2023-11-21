#include <stdio.h>
#include <stdlib.h>

struct ngaysinh
{
    int day;
    int month;
    int year;
};

struct nhanvien
{
    char ten[50];
    unsigned long long id;
    double luong;
    struct ngaysinh dob;
};

int main()
{
    struct nhanvien nv;

    printf("Name? ");
    scanf("%s", nv.ten);
    printf("\nID? ");
    scanf("%llu", &nv.id);
    printf("\nSalary? ");
    scanf("%lf", &nv.luong);
    printf("\nNgay sinh? ");
    scanf("%d", &nv.dob.day);
    printf("\nThang sinh? ");
    scanf("%d", &nv.dob.month);
    printf("\nNam sinh? ");
    scanf("%d", &nv.dob.year);


    printf("\nYour Name: %s\n", nv.ten);
    printf("Your ID: %llu\n", nv.id);
    printf("Your Salary: $%0.2lf\n", nv.luong);
    printf("Your Date of birth: %d/%d/%d", nv.dob.day,nv.dob.month,nv.dob.year);
    return 0;
}
