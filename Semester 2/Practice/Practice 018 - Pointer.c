/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 018 : Pointer 1 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int i = 3000; // 정수형 변수 i 선언, 초기값은 3000
	int* p; // 포인터 선언
	p = &i; // 변수와 포인터 연결

	printf("i = %d\n", i); // 변수의 값 출력
	printf("&i = %u\n\n", &i); // 변수의 주소 출력

	printf("p = %u\n", p); // 포인터의 값 출력
	printf("*p = %d\n", *p); // 포인터를 통한 간접 참조 값 출력

	return 0; // 프로그램 종료
}
