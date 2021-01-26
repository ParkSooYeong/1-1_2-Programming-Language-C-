/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("2개의 정수를 입력해주세요. : ");
	scanf("%d %d", &a, &b);

	printf("큰 수는 %d입니다.\n", get_max(a, b));

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
