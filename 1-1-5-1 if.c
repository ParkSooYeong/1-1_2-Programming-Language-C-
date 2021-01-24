/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int number;

	printf("정수를 입력해주세요. : ");
	scanf("%d", &number);

	printf("입력된 값은 %d입니다.\n", number);

	if (number > 0)
	{
		printf("입력된 값은 양수입니다.\n");
	}

	if (number < 0)
	{
		printf("입력된 값은 음수입니다.\n");
		number = -number;
	}

	printf("절댓값은 %d입니다.\n", number);

	return 0;
}
