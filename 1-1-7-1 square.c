/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i, j, result;

	printf("������ Ȯ���ϰ� ���� �ִ밪�� �Է����ּ���. : ");
	scanf("%d", &j);

	for (i = 1; i <= j; i++)
	{
		result = square(i);
		printf("%d\n", result);
	}

	return 0;
}

int square(int n)
{
	return(n * n);
}
