/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 2 , Number 1 */

// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int x; // 첫번째 정수를 저장할 변수
	int y; // 두번째 정수를 저장할 변수
	int sum; // 2개의 정수의 합을 저장할 변수

	printf("첫번째 숫자를 입력해주세요. : "); // 입력 안내 메시지 출력
	scanf("%d", &x); // 하나의 정수를 받아서 x에 저장

	printf("두번째 숫자를 입력해주세요. : "); // 입력 안내 메시지 출력
	scanf("%d", &y); // 하나의 정수를 받아서 y에 저장

	sum = x + y; // 변수 2개를 더한다.
	printf("두 수의 합 : %d\n", sum); // sum의 값을 10진수 형태로 출력

	return 0; // 0을 외부로 반환
}