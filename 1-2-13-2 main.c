/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 13 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include "1-2-13-2 power.h"

int main(void)
{
	int x, y;

	printf("x�� ���� �Է����ּ���. : ");
	scanf("%d", &x);
	printf("y�� ���� �Է����ּ���. : ");
	scanf("%d", &y);
	printf("%d ^ %d = %f\n", x, y, power(x, y));

	return 0;
}
