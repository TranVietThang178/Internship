#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * This is Lab no.2, created by Tran Viet Thang
 * Date created: 12/09/2023
 * goal of this lab: use of printf and scanf
 */

 //lab 2.1
/*
int main(void) {
	printf("Name: Tran Viet Thang\n");
	printf("DOB: 17/08/2003\n");
	printf("Mobile: 0904611132\n");

	return 0;
}
*/


//lab 2.2
/*
int main(void){
	int input;
	printf("input: ");
	scanf("%i", &input);
	printf("\nThe input is: %i\n", input);

	return 0;
}
*/


//lab 2.3
int main(void) {
	char name[32];

	scanf("%s", &name[32]);
	printf("\nHello %s. How are you?", name);

	return 0;
}


