/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 035 : Token */

#include <string.h> // 헤더 파일 포함
#include <stdio.h> // 헤더 파일 포함

char s[] = "Man is immortal, because he has a soul"; // 문자형 배열 s 선언, 초기값(문장) 지정
char seps[] = " , \t\n"; // 문자형 배열 seps 선언, 분리자는 스페이스, 쉼표, 탭, 줄바꿈 문자이다.
char* token; // 문자형 포인터 token 선언

int main(void) // 정수형 함수 main 시작
{
	token = strtok(s, seps); // 문자열 검색, 문자열에서 첫 번째 토큰을 얻는다.

	while (token != NULL) // 반복문 while 사용, token이 NULL 문자가 아니라면 반복
	{
		printf("토큰 : %s\n", token); // 메시지 출력, 문자열 s에 토큰이 있는 동안 반복한다.

		token = strtok(NULL, seps); // 문자열 검색, 다음 토큰을 얻는다.
	}

	return 0; // 프로그램 종료
}
