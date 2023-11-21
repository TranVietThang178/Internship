#include <stdio.h>
#include <stdlib.h>


//lab 3.1
/*
int main()
{
    float chieudai, chieurong;
    chieudai = 10.7;
    chieurong = 6.8;

    printf("Chu vi cua hinh chu nhat co chieu dai %0.1f va chieu rong %0.1f la %0.1f\n", chieudai, chieurong, 2 * (chieudai + chieurong));
    printf("Dien tich cua hinh chu nhat co chieu dai %0.1f va chieu rong %0.1f la %0.1f\n", chieudai, chieurong, chieudai * chieurong);
}
*/



//lab 3.2 + 3.3
int main() {
	enum Company {
		APPLE,
		ARAMCO,
		MICROSOFT,
		ALPHABET,
		AMAZON,
		TESLA,
		NVIDIA,
		TSMC,
		META
	};

	enum Company apple = APPLE;
	enum Company aramco = ARAMCO;
	enum Company microsoft = MICROSOFT;
	enum Company alphabet = ALPHABET;
	enum Company amazon = AMAZON;
	enum Company tesla = TESLA;
	enum Company nvidia = NVIDIA;
	enum Company tsmc = TSMC;
	enum Company meta = META;

	printf("The value of Apple is: %d\n", APPLE);
	printf("The value of Aramco is: %d\n", ARAMCO);
	printf("The value of Microsoft is: %d\n", MICROSOFT);
	printf("The value of Alphabet is: %d\n", ALPHABET);
	printf("The value of Amazon is: %d\n", AMAZON);
	printf("The value of Tesla is: %d\n", TESLA);
	printf("The value of Nvidia is: %d\n", NVIDIA);
	printf("The value of TSMC is: %d\n", TSMC);
	printf("The value of Meta is: %d\n", META);

	printf("The value of Apple is: %d\n", apple);
	printf("The value of Aramco is: %d\n", aramco);
	printf("The value of Microsoft is: %d\n", microsoft);
	printf("The value of Alphabet is: %d\n", alphabet);
	printf("The value of Amazon is: %d\n", amazon);
	printf("The value of Tesla is: %d\n", tesla);
	printf("The value of Nvidia is: %d\n", nvidia);
	printf("The value of TSMC is: %d\n", tsmc);
	printf("The value of Meta is: %d\n", meta);


	return 0;
}
