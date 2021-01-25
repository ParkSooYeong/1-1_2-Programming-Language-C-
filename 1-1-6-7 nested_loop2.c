/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int x, y;
	int h;

	printf("세로 길이를 설정해주세요. : ");
	scanf("%d", &h);

	for (y = 1; y <= h; y++)
	{
		for (x = 0; x < y; x++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
