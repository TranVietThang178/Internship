#include <stdio.h>
#include <stdlib.h>

int main()
{
    double minutes, days;

	printf("Please enter the number of minutes: ");
	scanf("%Lf", &minutes);

	days = minutes / 60 / 24;

	printf("The days converted from the minutes are: %Lf\n", days);
	printf("The years converted from the minutes are: %Lf\n", days / 365);
    return 0;
}
