/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int x, y, r;

	printf("2���� ������ �Է����ּ���.(ū ��,���� ��) : ");
	scanf("%d%d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ������� %d�Դϴ�.\n", x);

	return 0;
}
