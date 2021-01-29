/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 9 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

#define SIZE 5

double get_avg(int values[], int n);
void check_values(int values[], int n);

int main(void)
{
	int i;
	int data[5];
	double result;

	for (i = 0; i < SIZE; i++)
	{
		printf("°ªÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä. : ");
		scanf("%d", &data[i]);
	}

	check_values(data, SIZE);
	result = get_avg(data, SIZE);

	printf("Æò±Õ = %f\n", result);

	return 0;
}

void check_values(int values[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (values[i] < 0)
		{
			values[i] = 0;
		}
	}
}

double get_avg(int *p, int n)
{
	int i;
	double sum = 0.0;

	for (i = 0; i < n; i++)
	{
		sum += p[i];
	}

	return sum / n;
}
