/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int x, y;
	int a, b;

	printf("���� ���̸� �������ּ���. : ");
	scanf("%d", &a);
	printf("���� ���̸� �������ּ���. : ");
	scanf("%d", &b);

	for (y = 0; y < b; y++)		// �ܺ� �ݺ���
	{
		for (x = 0; x < a; x++)	// ���� �ݺ���
		{
			printf("*");
		}

		printf("\n");			// ���� �ݺ����� ����� ������ ����
	}

	return 0;
}
