/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 9 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i = 3000;
	int *p;

	p = &i;

	printf("i = %d\n", i); // ������ �� ���
	printf("&i = %u\n\n", &i); // ������ �ּ� ���

	printf("p =  %u\n", p); // �������� �� ���
	printf("*p = %d\n", *p); // �����͸� ���� ���� ���� �� ���

	printf("\n");

	int x = 10, y = 20;

	p = &x;
	printf("p = %d\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	printf("\n");

	int z = 10;

	p = &z;
	printf("z = %d\n", z);

	*p = 20;
	printf("z = %d\n", z);

	return 0;
}
