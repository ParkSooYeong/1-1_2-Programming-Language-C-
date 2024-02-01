/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 060 : Macro 2 */

#include <stdio.h> // 헤더 파일 포함

#define SQUARE(x) x * x // 함수 매크로 SQUARE(x) 정의

int main(void) // 정수형 함수 main 시작
{
	int x = 2; // 정수형 변수 x 선언, 초기값 2

	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%d\n", SQUARE(1.2)); // 실수에도 적용 가능
	printf("%d\n", SQUARE(x + 3));
	printf("%d\n", 100 / SQUARE(x));
	printf("%d\n", SQUARE(++x)); // 논리 오류

	return 0; // 프로그램 종료
}
