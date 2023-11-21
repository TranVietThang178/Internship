#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total = 0;
    float rain[5][12] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    for (int i = 0; i < 5; i++) {
        float yearly = 0;
        for (int j = 0; j < 12; j++) {
            yearly += rain[i][j];
            total += rain[i][j];
        }
        printf("The total rain fall yearly is: %0.2f\n", yearly);
        printf("The average rain fall for each month is: %0.2f\n", yearly / 12);
    }
    printf("The total rain fall in the past 5 years are: %0.2f\n", total);
    printf("The average rain fall in the past 5 years are: %0.2f\n", total / 5);

    return 0;
}
