/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int compute_sum(int n, int m); // �Լ� ����

int main(void)
{
	int n, m, sum;

	printf("���� ������ �Է����ּ���. : ");
	scanf("%d", &n);
	printf("������ ������ �Է����ּ���. : ");
	scanf("%d", &m);

	sum = compute_sum(n, m); // �Լ� ���

	printf("\n%d���� %d������ ���� %d�Դϴ�.\n\n", n, m, sum);

	return 0;
}

int compute_sum(int n, int m) // �Լ� ����
{
	int i;
	int result = 0;

	for (i = n; i <= m; i++)
	{
		result += i;
	}

	return result;
}
