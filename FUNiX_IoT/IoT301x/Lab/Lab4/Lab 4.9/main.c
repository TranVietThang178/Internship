#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int ID, work_hours, hourly_wages;
	printf("Enter your ID: ");
	scanf("%u", &ID);
	printf("\nEnter your total work hours: ");
	scanf("%u", &work_hours);
	printf("\nEnter your hourly wages: ");
	scanf("%u", &hourly_wages);

	printf("Your ID: %u\n", ID);
	printf("Your total work hours: %u\n", work_hours);
	printf("Your hourly wages: $%u\n", hourly_wages);
	printf("Your salary this month = $%u\n", work_hours * hourly_wages);
    return 0;
}
