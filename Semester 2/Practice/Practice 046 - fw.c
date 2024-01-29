/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 046 : fw */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	printf("%6d	%6d\n", 1, -1); // 필드폭은 6이고 오른쪽 정렬
	printf("%6d	%6d\n", 12, -12);
	printf("%6d	%6d\n", 123, -123);
	printf("%-6d	%-6d\n", 1, -1); // 필드폭은 6이고 왼쪽 정렬
	printf("%-6d	%-6d\n", 12, -12);
	printf("%-6d	%-6d\n", 123, -123);

	return 0; // 프로그램 종료
}
