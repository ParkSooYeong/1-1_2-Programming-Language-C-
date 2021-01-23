/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int x, y, result;

	printf("2개의 정수를 입력해주세요. : ");
	scanf("%d %d", &x, &y);

	result = x + y; // 덧셈 연산
	printf("%d + %d = %d\n", x, y, result);

	result = x - y; // 뺄셈 연산
	printf("%d - %d = %d\n", x, y, result);

	result = x * y; // 곱셈 연산
	printf("%d * %d = %d\n", x, y, result);

	result = x / y; // 나눗셈 연산
	printf("%d / %d = %d\n", x, y, result);

	result = x % y; // 나머지 연산
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}
