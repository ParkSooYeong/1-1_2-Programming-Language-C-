/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 005 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int i = 1, j = 2; // 정수형 변수 i, j 선언, 초기값은 각각 1, 2
	int* p, * q; // 포인터 p, q 선언

	p = &i; // 포인터 p는 i를 가리킴
	q = &j; // 포인터 q는 j를 가리킴

	printf("%d %d", *p, *q); // 포인터 p와 q가 각각 가리키는 i와 j의 값을 출력

	return 0; // 프로그램 종료
}
