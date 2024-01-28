/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 045 : typedef */

#include <stdio.h> // 헤더 파일 포함

typedef struct point // 구조체 point 정의
{
	int x; // 정수형 멤버 변수 x 정의
	int y; // 정수형 멤버 변수 y 정의
} POINT; // POINT 타입으로 재정의

POINT translate(POINT p, POINT delta); // POINT형 함수 translate 예비 정의, p와 delta를 참조

int main(void) // 정수형 함수 main 시작
{
	POINT p = { 2, 3 }; // POINT 변수 p 선언 후, 2와 3을 대입
	POINT delta = { 10, 10 }; // POINT 변수 delta 선언 후, 10을 각각 대입
	POINT result; // POINT 변수 result 선언

	result = translate(p, delta); // 함수 translate에 p와 delta를 대입하여 그 결과값을 result에 저장

	printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y); // 메시지 출력

	return 0; // 프로그램 종료
}

POINT translate(POINT p, POINT delta) // POINT형 함수 translate 시작, POINT형 변수 p와 delta 참조
{
	POINT new_p; // POINT형 변수 new_p 선언

	new_p.x = p.x + delta.x; // x 좌표값 계산
	new_p.y = p.y + delta.y; // y 좌표값 계산

	return new_p; // 계산된 x좌표, y좌표값을 반환
}
