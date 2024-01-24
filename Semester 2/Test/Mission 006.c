/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 006 */

#include <stdio.h> // 헤더 파일 포함
#include <ctype.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char s[100]; // 문자형 변수 s 선언, 크기는 100
	int i; // 정수형 변수 i 선언

	printf("텍스트를 입력하세요. : "); // 텍스트 입력 지시 메시지 출력

	gets(s); // 텍스트를 입력받아서 s에 저장

	for (i = 0; i < s[i]; i++) // 반복문 for 사용, i는 0부터 시작하여 s[i]보다 작을때까지 1씩 증가
	{
		s[i] = toupper(s[i]); // s에 저장된 텍스트를 대문자로 변환
	}

	printf("대문자 출력 : %s\n", s); // 변환된 대문자 메시지 출력

	return 0; // 프로그램 종료
}
