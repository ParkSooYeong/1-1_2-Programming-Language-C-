/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i, j, sum;
	
	printf("�ݺ��Ͽ� ���� �ִ밪�� �Է����ּ���. : ");
	scanf("%d", &j);

	sum = 0;

	for (i = 1; i <= j; i++)
	{
		sum += i;
	}

	printf("1���� %d���� ������ �� = %d\n", j, sum);

	return 0;
}
