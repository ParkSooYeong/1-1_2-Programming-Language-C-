/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("2���� ������ �Է����ּ���. : ");
	scanf("%d %d", &a, &b);

	printf("ū ���� %d�Դϴ�.\n", get_max(a, b));

	return 0;
}

int get_max(int x, int y)
{
	if (x > y)
	{
		return(x);
	}
	else
	{
		return(y);
	}
}
