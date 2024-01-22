/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 010 : Days */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; // 정수형 배열 days 선언, 초기값 각각 지정, 총 12개
	int i; // 정수형 변수 i 선언

	for (i = 1; i <= 12; i++) // 반복문 for 사용, i는 1부터 시작하여 12에 도달할때까지 1씩 증가
	{
		printf("%d월은 %d일까지 있습니다.\n", i, days[i - 1]); // 증가하는 i에 따라 그에 맞는 메시지 출력
	}

	return 0; // 프로그램 종료
}
