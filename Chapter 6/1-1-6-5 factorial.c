/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("Á¤¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä. : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	printf("%d! = %d\n", n, fact);

	return 0;
}
