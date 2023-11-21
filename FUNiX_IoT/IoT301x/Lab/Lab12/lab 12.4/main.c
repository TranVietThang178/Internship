#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hocsinh
{
    char firstname[25];
    char lastname[25];
    int age;
    char address[128];
    float GPA;
};

struct hocsinh students[100];

void displayStudent(struct hocsinh *hs);
void info(int studentnum);
void nhap(int *studentnum);

int main()
{
    int num;
    int studentnum = 0;
    while (1)
    {
        printf("Hay lua chon 1, 2 hoac 3\n");
        printf("1. Nhap thong tin hoc sinh\n");
        printf("2. Tim kiem hoc sinh\n");
        printf("3. Thoat\n");
        scanf("%d", &num);

        if (num == 1)
        {
            nhap(&studentnum);
        }
        else if (num == 2)
        {
            info(studentnum);
        }
        else if (num == 3)
        {
            break;
        }
        else
        {
            printf("So khong hop le!\n");
        }
    }

    return 0;
}

void info(int studentnum)
{
    struct hocsinh hs;
    char searchfname[25];
    char searchlname[25];
    printf("Vui long nhap ten cua hoc sinh can tim.\n");

    printf("Ten: ");
    scanf("%s", searchfname);

    printf("Ho: ");
    scanf("%s", searchlname);

    int found = 0;
    for (int i = 0; i < studentnum; i++)
    {
        if (strcasecmp(students[i].firstname, searchfname) == 0 && strcasecmp(students[i].lastname, searchlname) == 0)
        {
            displayStudent(&students[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found.\n");
    }
}

void nhap(int *studentnum)
{
    struct hocsinh hs;
    printf("Vui long nhap thong tin hoc sinh.\n");

    printf("Ten: ");
    scanf("%s", hs.firstname);

    printf("Ho: ");
    scanf("%s", hs.lastname);

    printf("Tuoi: ");
    scanf("%d", &hs.age);

    printf("Dia chi: ");
    scanf(" %[^\n]", hs.address);

    printf("GPA: ");
    scanf("%f", &hs.GPA);

    students[*studentnum] = hs;
    (*studentnum)++;
}

void displayStudent(struct hocsinh *hs)
{
    printf("\nStudent Information:\n");
    printf("First Name: %s\n", hs->firstname);
    printf("Last Name: %s\n", hs->lastname);
    printf("Age: %d\n", hs->age);
    printf("Address: %s\n", hs->address);
    printf("GPA: %.2f\n", hs->GPA);
}






