/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 061 : Bit_op */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int x = 9;	// 1001
	int y = 10;	// 1010

	printf("비트 AND = %08X\n", x & y);	// 1000
	printf("비트 OR = %08X\n", x | y);	// 1011
	printf("비트 XOR = %08X\n", x ^ y);	// 0011
	printf("비트 NOT = %08X\n", ~x);	// 0110

	return 0; // 프로그램 종료
}
