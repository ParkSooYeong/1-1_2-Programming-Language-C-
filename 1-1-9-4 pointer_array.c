/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 9 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	int *p;

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a);

	printf("\n");

	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);
	printf("*(a+1) = %d\n", *(a + 1));

	printf("\n");

	p = a;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n\n", p[0], p[1], p[2]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n\n", p[0], p[1], p[2]);

	return 0;
}
