/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int x, y;
	int h;

	printf("技肺 辨捞甫 汲沥秦林技夸. : ");
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
