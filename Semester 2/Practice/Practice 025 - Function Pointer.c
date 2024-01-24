/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 025 : Function Pointer */

// 함수 포인터
#include <stdio.h> // 헤더 파일 포함

// 함수 원형 정의
int add(int, int); // 정수형 함수 add 예비 선언, 2개의 정수형 매개변수 지정
int sub(int, int); // 정수형 함수 sub 예비 선언, 2개의 정수형 매개변수 지정

int main(void) // 정수형 함수 main 시작
{
	int result; // 정수형 변수 result 선언
	int (*pf) (int, int); // 함수 포인터 정의

	pf = add; // add를 pf에 저장
	result = pf(10, 20); // 함수 포인터 pf 호출, 10과 20을 대입
	printf("10 + 20 = %d\n", result); // 계산이 완료된 덧셈식 출력

	pf = sub; // sub를 pf에 저장
	result = pf(10, 20); // 함수 포인터 pf 호출, 10과 20을 대입
	printf("10 - 20 = %d\n", result); // 계산이 완료된 뺄셈식 출력

	return 0; // 프로그램 종료
}

int add(int x, int y) // 정수형 함수 add 시작, 정수형 매개변수 x와 y 지정
{
	return x + y; // x와 y를 더한 값을 반환
}

int sub(int x, int y) // 정수형 함수 sub 시작, 정수형 매개변수 x와 y 지정
{
	return x - y; // x와 y를 뺀 값을 반환
}
