/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int number;

	printf("������ �Է����ּ���. : ");
	scanf("%d", &number);

	printf("�Էµ� ���� %d�Դϴ�.\n", number);

	if (number > 0)
	{
		printf("�Էµ� ���� ����Դϴ�.\n");
	}

	if (number < 0)
	{
		printf("�Էµ� ���� �����Դϴ�.\n");
		number = -number;
	}

	printf("������ %d�Դϴ�.\n", number);

	return 0;
}
