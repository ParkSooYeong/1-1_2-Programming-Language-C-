/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 021 : p_338_7 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int x = 10; // x의 주소는 1000번지라고 가정
	int* p = &x; // 포인터 p 선언

	printf("&x = %u\n", &x); // 변수 x의 주소 출력

	printf("*p = %d\n", *p); // 포인터 p가 가리키는 변수 x의 주소의 값 출력

	printf("++(*p) = %d\n", ++(*p)); // 포인터 p가 가리키는 변수 x의 주소의 값에 1을 더해서 출력

	printf("p + 1 = %u\n", p + 1); // 포인터 p가 가리키는 변수 x의 주소에 int형 크기로 1을 더해서 출력

	printf("*p++ = %d\n", *p++); // 포인터 p가 가리키는 변수 x의 주소의 값에 1을 더해서 출력

	return 0; // 프로그램 종료
}
