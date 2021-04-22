/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 8 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define FREQ_SIZE 101

int main(void)
{
	int i;
	int grade[SIZE];
	int freq[FREQ_SIZE];
	int sum = 0;
	int average;
	int s;
	int min, max;

	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;

	for (i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		grade[i] = rand() % 100;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d번째 수를 입력해주세요. : ", i+1);
		scanf("%d", &grade[i]);
	}

	for (i = 0; i < SIZE; i++)
	{
		sum += grade[i];
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	printf("\n");

	average = sum / SIZE;
	printf("평균 : %d\n", average);

	printf("\n");

	sum = sizeof(grade) / sizeof(grade[0]);

	for (i = 0; i < sum; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("line %d : ", i + 1);

		for (s = 0; s < grade[i]; s++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	min = grade[0];

	for (i = 1; i < SIZE; i++)
	{
		if (grade[i] < min)
		{
			min = grade[i];
		}
	}

	printf("최솟값은 %d입니다.\n", min);

	max = grade[0];

	for (i = 1; i < SIZE; i++)
	{
		if (grade[i] > max)
		{
			max = grade[i];
		}
	}

	printf("최댓값은 %d입니다.\n", max);

	printf("\n");

	for (i = 0; i < FREQ_SIZE; i++)
	{
		freq[i] = 0;
	}

	while (1)
	{
		printf("숫자를 입력해주세요.(종료 = -1) : ");
		scanf("%d", &sum);

		if (sum < 0)
		{
			break;
		}

		freq[sum]++;
	}

	printf("\n 값    빈도\n");

	for (i = 0; i < FREQ_SIZE; i++)
	{
		printf("%3d   %3d\n", i, freq[i]);
	}

	return 0;
}
