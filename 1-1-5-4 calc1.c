/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	char op;
	int x, y;

	printf("������ �Է����ּ���. : ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
	{
		printf("%d %c %d = %d \n", x, op, y, x + y);
	}
	else if (op == '-')
	{
		printf("%d %c %d = %d \n", x, op, y, x - y);
	}
	else if (op == '*')
	{
		printf("%d %c %d = %d \n", x, op, y, x * y);
	}
	else if (op == '/')
	{
		printf("%d %c %d = %d \n", x, op, y, x / y);
	}
	else if (op == '%')
	{
		printf("%d %c %d = %d \n", x, op, y, x % y);
	}
	else
	{
		printf("�������� �ʴ� �������Դϴ�. \n\n");
	}

	return 0;
}
