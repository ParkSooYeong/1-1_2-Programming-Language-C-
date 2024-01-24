/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 023 : Swap */

#include <stdio.h> // 헤더 파일 포함

void swap(int* x, int* y); // 함수 swap 예비 선언, 정수형 매개변수 포인터 x와 y 지정

int main(void) // 정수형 함수 main 시작
{
	int a = 100, b = 200; // 정수형 변수 a와 b 선언, 초기값은 각각 100, 200

	printf("a = %d, b = %d\n", a, b); // a와 b 값 출력

	swap(&a, &b); // 함수 swap 호출, 포인터 a와 b 사용

	printf("a = %d, b = %d\n", a, b); // a와 b 값 출력

	return 0; // 프로그램 종료
}

void swap(int* px, int* py) // 함수 swap 시작, 정수형 매개변수 포인터 px와 py 지정
{
	int tmp; // 정수형 변수 tmp 선언

	tmp = *px; // 포인터 px가 가르키는 값을 tmp에 저장
	*px = *py; // 포인터 py가 가르키는 값을 px에 저장
	*py = tmp; // tmp가 저장하고 있는 값을 포인터 py에 저장

	printf("px = %d, py = %d\n", *px, *py); // 포인터 px와 py가 가르키는 값 출력
}
