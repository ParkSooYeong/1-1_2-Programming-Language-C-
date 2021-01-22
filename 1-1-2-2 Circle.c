/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 2 , Number 2 */

// 원의 면적을 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	float radius; // 원의 반지름
	float area; // 면적

	printf("원의 반지름을 입력해주세요. : "); // 입력 안내 메시지 출력
	scanf("%f", &radius); // 하나의 실수를 받아서 radius에 저장

	area = 3.14 * radius * radius; // 원의 면적 계산

	printf("원의 면적 : %f\n", area); // area의 값을 실수 형태로 출력

	return 0; // 0을 외부로 반환
}
