/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int x, y;

	printf("첫번째 수를 입력해주세요. : ");
	scanf("%d", &x);
	printf("두번째 수를 입력해주세요. : ");
	scanf("%d", &y);

	printf("\n큰 수는 %d입니다.\n", (x > y) ? x : y);
	printf("작은 수는 %d입니다.\n\n", (x < y) ? x : y);

	return 0;
}
