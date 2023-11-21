#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oldname[25], newname[25], buffer[25];

    /*printf("Hay nhap ten file can doi\n");
    scanf("%s", oldname);
    printf("Hay nhap ten moi\n");
    scanf("%s", newname);
    rename(oldname, newname);

    if (rename(oldname, newname) == 0)
        printf("Rename operation failed!\n");
    else
        printf("Rename operation succeeded!\n");*/


    printf("Nhap ten file can xoa:\n");
    scanf("%s", buffer);
    remove(buffer);

    if (remove(buffer) == 0)
        printf("Remove operation failed!\n");
    else
        printf("Remove operation succeeded!\n");
    return 0;
}
