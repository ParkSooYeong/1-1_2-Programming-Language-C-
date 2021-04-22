/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 8 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

#define SIZE 10

int main(void)
{
	int list[SIZE] = { 0,1,3,5,7,9,8,6,4,2 };

	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;

		for (j = i + 1; j < SIZE; j++)
		{
			if (list[j] < list[least])
			{
				least = j;
			}
		}

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}

	printf("\n");

	return 0;
}
