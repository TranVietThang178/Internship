#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


//lab 3.4
int main(int age, char *argv[]){
    char *name = argv[2];

	printf("How old are you? ");
	scanf("%d", &age);
	printf("Hello %s, %d years old", name, age);
	return 0;
}
