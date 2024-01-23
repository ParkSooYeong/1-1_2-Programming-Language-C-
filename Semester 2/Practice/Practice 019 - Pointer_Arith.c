/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 019 : Pointer_Arith 2 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int i = 10; // 정수형 변수 i 선언, 초기값은 10
	int* pi = &i; // 포인터 선언

	printf("i = %d, pi = %p\n", i, pi); // 변수 i의 값과 포인터 pi의 주소 출력

	(*pi)++; // pi가 가리키는 대상을 증가

	printf("i = %d, pi = %p\n", i, pi); // 변수 i의 값과 포인터 pi의 주소 출력

	printf("i = %d, pi = %p\n", i, pi); // 변수 i의 값과 포인터 pi의 주소 출력

	*pi++; // pi를 증가

	printf("i = %d, pi = %p\n", i, pi); // 변수 i의 값과 포인터 pi의 주소 출력

	return 0; // 프로그램 종료
}
