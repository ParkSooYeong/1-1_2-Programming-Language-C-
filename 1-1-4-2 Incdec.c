/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int x = 0, nextx = 0;
	
	x = 0;
	nextx = ++x;
	printf("nextx = %d , x = %d\n", nextx, x);

	x = 0;
	nextx = x++;
	printf("nextx = %d , x = %d\n", nextx, x);

	x = 0;
	nextx = --x;
	printf("nextx = %d , x = %d\n", nextx, x);

	x = 0;
	nextx = x--;
	printf("nextx = %d , x = %d\n", nextx, x);

	return 0;
}
