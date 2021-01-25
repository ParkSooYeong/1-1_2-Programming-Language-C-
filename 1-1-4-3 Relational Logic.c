/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int x, y;

	printf("2개의 정수를 입력해주세요. : ");
	scanf("%d %d", &x, &y);

	printf("x == y : %d\n", x == y);
	printf("x != y : %d\n", x != y);
	printf("x > y : %d\n", x > y);
	printf("x < y : %d\n", x < y);
	printf("x >= y : %d\n", x >= y);
	printf("x <= y : %d\n", x <= y);
	printf("x && y : %d\n", x && y);
	printf("x || y : %d\n", x || y);
	printf("!x : %d\n", !x);
	printf("!y : %d\n", !y);

	return 0;
}
