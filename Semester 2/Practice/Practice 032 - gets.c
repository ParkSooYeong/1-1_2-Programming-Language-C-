/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 032 : gets */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char name[100]; // 문자형 배열 name 선언, 크기는 100
	char address[100]; // 문자형 배열 address 선언, 크기는 100

	printf("이름을 입력하시오 : "); // 이름 입력 지시 메시지 출력
	gets(name); // 이름을 입력받아서 문자열 name에 저장(한 줄을 입력받는다.)
	printf("현재 거주하는 주소를 입력하시오 : "); // 주소 입력 지시 메시지 출력
	gets(address); // 주소를 입력받아서 문자열 address에 저장

	puts(name); // 문자열 name(이름) 출력
	puts(address); // 문자열 address(주소) 출력
	// 줄 단위로 출력한다.

	return 0; // 프로그램 종료
}
