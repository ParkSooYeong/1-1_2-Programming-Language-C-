/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 13 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define DELUXE
#define LINUX

int main(void)
{
	int x = 2;

	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%f\n", SQUARE(1.2)); // 실수에도 적용 가능
	printf("%d\n", SQUARE(x + 3));
	printf("%d\n", 100 / SQUARE(x));
	printf("%d\n", SQUARE(++x)); // 논리 오류

	printf("\n");

#ifdef DELUXE
	{
		printf("DELUXE ver\n");
	}
#endif
	{
		return 0;
	}

	printf("\n");

#ifdef LINUX
	{
		printf("LINUX ver\n");
	}
#else
	{
		printf("Window ver\n");
	}
#endif
	{
		return 0;
	}
}
