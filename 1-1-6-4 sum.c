/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i, j, sum;
	
	printf("반복하여 더할 최대값을 입력해주세요. : ");
	scanf("%d", &j);

	sum = 0;

	for (i = 1; i <= j; i++)
	{
		sum += i;
	}

	printf("1부터 %d까지 정수의 합 = %d\n", j, sum);

	return 0;
}
