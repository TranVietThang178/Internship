#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("The temperature right now is: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("The weather is freezing!\n");
    } else if (temp >= 0 && temp < 10) {
        printf("The weather is really cold!\n");
    } else if (temp >= 10 && temp < 20) {
        printf("The weather is cold!\n");
    } else if (temp >= 20 && temp < 30) {
        printf("The weather is fantastic!\n");
    } else if (temp >= 30 && temp < 40) {
        printf("The weather is hot!\n");
    } else {
        printf("The weather is really hot!");
    }
    return 0;
}
