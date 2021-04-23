/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 9 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
	if (x1 == x2)
	{
		return -1;
	}
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;

		return 0;
	}
}

int main(void)
{
	float s, y;

	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
	{
		printf("Error\n");
	}
	else
	{
		printf("±â¿ï±â = %f, yÀýÆí = %f\n", s, y);
	}

	return 0;
}
