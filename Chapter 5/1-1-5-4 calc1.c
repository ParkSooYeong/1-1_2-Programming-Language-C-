/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	char op;
	int x, y;

	printf("수식을 입력해주세요. : ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
	{
		printf("%d %c %d = %d \n", x, op, y, x + y);
	}
	else if (op == '-')
	{
		printf("%d %c %d = %d \n", x, op, y, x - y);
	}
	else if (op == '*')
	{
		printf("%d %c %d = %d \n", x, op, y, x * y);
	}
	else if (op == '/')
	{
		printf("%d %c %d = %d \n", x, op, y, x / y);
	}
	else if (op == '%')
	{
		printf("%d %c %d = %d \n", x, op, y, x % y);
	}
	else
	{
		printf("지원되지 않는 연산자입니다. \n\n");
	}

	return 0;
}
