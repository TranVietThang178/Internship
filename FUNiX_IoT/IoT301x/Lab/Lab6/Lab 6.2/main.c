#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, random;
	printf("Please make a guess between 1 and 100: ");
	scanf("%d", &a);
	random = 77;

	while (a != random) {
		if (a < random) {
			printf("The number is larger. Please make another guess: ");
			scanf("%d", &a);
		} else {
			printf("The number is smaller. Please make another guess: ");
			scanf("%d", &a);
		}
	}
	printf("You guessed the right number!\n");
    return 0;
}
