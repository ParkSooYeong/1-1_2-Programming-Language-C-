/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	char op;
	int x, y;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
	case '+':
		printf("%d %c %d = %d \n", x, op, y, x + y);
		break;
	case '-':
		printf("%d %c %d = %d \n", x, op, y, x - y);
		break;
	case '*':
		printf("%d %c %d = %d \n", x, op, y, x * y);
		break;
	case '/':
		printf("%d %c %d = %d \n", x, op, y, x / y);
		break;
	case '%':
		printf("%d %c %d = %d \n", x, op, y, x % y);
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�. \n");
		break;
	}

	return 0;
}
