/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 9 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

void swap(int x, int y);
void swap_p(int *px, int *py);

int main(void)
{
	int a = 100, b = 200;

	printf("swap() 호출 전 : a = %d, b = %d\n", a, b);

	swap(a, b);

	printf("swap() 호출 후 : a = %d, b = %d\n", a, b);

	printf("\n");

	printf("swap() 호출 전 : a = %d, b = %d\n", a, b);

	swap_p(&a, &b);

	printf("swap() 호출 후 : a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int tmp;

	printf("swap() x = %d, y = %d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("swap() x = %d, y = %d\n", x, y);
}

void swap_p(int *px, int *py)
{
	int temp;

	printf("swap_p() x = %d, y = %d\n", *px, *py);

	temp = *px;
	*px = *py;
	*py = temp;

	printf("swap_p() x = %d, y = %d\n", *px, *py);
}
