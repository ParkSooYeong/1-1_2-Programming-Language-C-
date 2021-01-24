/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int number;
	int n, d, result;

	printf("정수를 입력해주세요. : ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("입력된 정수는 짝수입니다.\n\n");
	}
	else
	{
		printf("입력된 정수는 홀수입니다.\n\n");
	}

	printf("분자를 입력해주세요. : ");
	scanf("%d", &n);
	printf("분모를 입력해주세요. : ");
	scanf("%d", &d);

	if (d == 0)
	{
		printf("분모가 0일 수는 없어요..\n\n");
	}
	else
	{
		result = n / d;
		printf("결과는 %d입니다.\n\n", result);
	}

	return 0;
}
