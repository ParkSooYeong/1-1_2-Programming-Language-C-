/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int x, y, result;

	printf("2���� ������ �Է����ּ���. : ");
	scanf("%d %d", &x, &y);

	result = x + y; // ���� ����
	printf("%d + %d = %d\n", x, y, result);

	result = x - y; // ���� ����
	printf("%d - %d = %d\n", x, y, result);

	result = x * y; // ���� ����
	printf("%d * %d = %d\n", x, y, result);

	result = x / y; // ������ ����
	printf("%d / %d = %d\n", x, y, result);

	result = x % y; // ������ ����
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}
