/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int x, y;

	printf("2���� ������ �Է����ּ���. : ");
	scanf("%d %d", &x, &y);

	printf("x == y : %d\n", x == y);
	printf("x != y : %d\n", x != y);
	printf("x > y : %d\n", x > y);
	printf("x < y : %d\n", x < y);
	printf("x >= y : %d\n", x >= y);
	printf("x <= y : %d\n", x <= y);
	printf("x && y : %d\n", x && y);
	printf("x || y : %d\n", x || y);
	printf("!x : %d\n", !x);
	printf("!y : %d\n", !y);

	return 0;
}