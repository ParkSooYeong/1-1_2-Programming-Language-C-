/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("����ϰ� ���� ���� �Է����ּ���. : ");
	scanf("%d", &n);

	while (i <= 9)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		i++;
	}

	return 0;
}
