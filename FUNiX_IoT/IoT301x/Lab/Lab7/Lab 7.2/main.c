#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5] = {16, 8, 21, 17, 28};
	for (int i = 4; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

    return 0;
}
