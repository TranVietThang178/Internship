#include <stdio.h>

int main(void)
{
	float i;
	scanf("%f", &i);

	if (i >= 35) printf("OK Lumi! The AC is ON");
	else printf("OK Lumi! The AC is OFF");

	getchar();
	getchar();

	return 0;
}
