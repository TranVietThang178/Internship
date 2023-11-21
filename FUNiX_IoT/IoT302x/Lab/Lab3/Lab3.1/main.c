#include <stdio.h>

void press_to_exit(void);

int main(void) {
	char ho[25];
	char ten[25];

	printf("Nhap ho va ten\n");
	printf("Ho: ");
	scanf("%s", ho);

	printf("Ten: ");
	scanf("%s", ten);

	printf("Ho va ten: %s %s", ten, ho);

	press_to_exit();

	return 0;
}

void press_to_exit(void){
	while (getchar() != '\n') {
	}
	getchar();
}
