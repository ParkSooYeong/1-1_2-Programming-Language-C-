/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 10 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	char str1[5] = "Park";
	char str2[4] = { 'S','o','o','\0' };
	char str3[] = "Young";

	printf("%s %s %s\n", str1, str2, str3);

	printf("\n");

	str3[1] = 'e';
	str3[2] = 'o';

	printf("%s %s %s\n", str1, str2, str3);

	printf("\n");

	char str[] = "Park Soo Young or Park Soo Yeong";
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}

	printf("%s = %d\n", str, i);

	return 0;
}
