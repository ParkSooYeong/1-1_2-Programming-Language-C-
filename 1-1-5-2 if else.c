/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int number;
	int n, d, result;

	printf("������ �Է����ּ���. : ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("�Էµ� ������ ¦���Դϴ�.\n\n");
	}
	else
	{
		printf("�Էµ� ������ Ȧ���Դϴ�.\n\n");
	}

	printf("���ڸ� �Է����ּ���. : ");
	scanf("%d", &n);
	printf("�и� �Է����ּ���. : ");
	scanf("%d", &d);

	if (d == 0)
	{
		printf("�и� 0�� ���� �����..\n\n");
	}
	else
	{
		result = n / d;
		printf("����� %d�Դϴ�.\n\n", result);
	}

	return 0;
}
