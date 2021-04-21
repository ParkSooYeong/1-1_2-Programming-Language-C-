/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

long factorial(int n);

int main(void)
{
	int x = 0;
	long f;

	printf("Á¤¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä. : ");
	scanf("%d", &x);

	f = factorial(x);
	printf("\n%d! = %d\n\n", x, f);

	return 0;
}

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
