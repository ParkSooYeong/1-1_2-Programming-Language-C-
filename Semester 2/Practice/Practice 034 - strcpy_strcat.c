/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 034 : strcpy_strcat */

// strcpy와 strcat
#include <string.h> // 헤더 파일 포함
#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char string[80]; // 문자형 배열 string 선언, 크기는 80

	strcpy(string, "Hello world from "); // 문자열 복사
	strcat(string, "strcpy "); // 문자열 이어붙이기
	strcat(string, "and "); // 문자열 이어붙이기
	strcat(string, "strcat! "); // 문자열 이어붙이기

	printf("string = %s\n", string); // 메시지 출력

	return 0; // 프로그램 종료
}
