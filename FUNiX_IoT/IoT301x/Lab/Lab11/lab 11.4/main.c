#include <stdio.h>
#include <stdlib.h>

void search(int *x, int *y);

int main()
{
    int arr[5] = {0,1,2,3,4};
    int *ptr;
    int *ptr2;
    int find = 4;
    ptr = arr;
    *ptr2 = find;


    search(ptr,ptr2);

    return 0;
}
void search(int *x, int *y)
{
    int i, f = 0;

    for (i=0;i<5;i++)
    {
        if (*(x+i) == *y)
        {
            f=1;
            break;
        }
        else
            continue;
    }
    if(f==1)
        printf("Found!\n");
    else
        printf("Not found!\n");
}
