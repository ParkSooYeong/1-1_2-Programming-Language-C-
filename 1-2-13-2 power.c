/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 13 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include "1-2-13-2 power.h"

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}

	return result;
}
