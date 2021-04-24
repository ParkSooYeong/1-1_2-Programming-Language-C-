/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 10 , Number 10 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i;
	char menu[5][10] = { "init",
						 "open",
						 "close",
						 "read",
						 "write" };

	for (i = 0; i < 5; i++)
	{
		printf("menu %d : %s\n", i, menu[i]);
	}

	return 0;
}
