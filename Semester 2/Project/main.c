/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Project : Power - main.c */

// 다중 소스 파일
#include <stdio.h> // 헤더 파일 포함
#include "power.h"

int main(void) // 정수형 함수 main 시작
{
	int x, y; // 정수형 변수 x,y 선언

	printf("x의 값을 입력하시오 : "); // x값 입력 지시 메시지 출력
	scanf("%d", &x); // 값을 입력받아서 x에 저장
	printf("y의 값을 입력하시오 : "); // y값 입력 지시 메시지 출력
	scanf("%d", &y); // 값을 입력받아서 y에 저장
	printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y)); // 제곱값 메시지 출력

	return 0; // 프로그램 종료
}
