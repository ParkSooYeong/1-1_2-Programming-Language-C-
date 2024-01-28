/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 043 : Vector */

#include <stdio.h> // 헤더 파일 포함

struct vector // 구조체 vector 정의
{
	float x; // 실수형 변수 멤버 x 정의
	float y; // 실수형 변수 멤버 y 정의
};
struct vector get_vector_sum(struct vector a, struct vector b); // 구조체 vector 함수 get_vector_sum 정의, 구조체 반환, 구조체 받음

int main(void) // 정수형 함수 main 시작
{
	struct vector a = { 2.0, 3.0 }; // 구조체 vector 변수 a 선언
	struct vector b = { 5.0, 6.0 }; // 구조체 vector 변수 b 선언
	struct vector sum; // 구조체 vector 변수 sum 선언

	sum = get_vector_sum(a, b); // 구조체 함수 get_vector_sum 호출, 값을 sum에 저장

	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y); // 벡터의 합 출력

	return 0; // 프로그램 종료
}

struct vector get_vector_sum(struct vector a, struct vector b) // 구조체 vector 함수 get_vector_sum 시작, 매개 구조체 변수 a,b 지정
{
	struct vector result; // 구조체 vector 변수 result 선언

	result.x = a.x + b.x; // x 벡터값 계산
	result.y = a.y + b.y; // y 벡터값 계산

	return result; // 계산값을 반환
}
