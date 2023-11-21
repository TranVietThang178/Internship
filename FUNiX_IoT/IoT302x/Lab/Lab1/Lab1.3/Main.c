/*
 * Main.c
 *
 *  Created on: Nov 15, 2023
 *      Author: viett
 */
#include <stdio.h>

int main(void) {
	for (int i = 0; i < 6; i++){

		for (int j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
				printf("*");
		}
		printf("\n");
	}
	for (int i = 4; i > 0; i--){
		for (int j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
