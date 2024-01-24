/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 033 : char_Process */

#include <stdio.h> // 헤더 파일 포함
#include <ctype.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int c; // 정수형 변수 c 선언

	while ((c = getchar()) != EOF) // 반복문 while 사용, 파일의 끝이 아니면 반복, 여기서는 입력의 끝을 나타낸다.(EOF{End of File)를 입력하기 위해서는 Ctrl + Z를 입력하면 된다.)
	{
		if (islower(c)) // 조건문 if 사용, 입력받은 문자가 소문자일때, 아래 코드 실행
		{
			c = toupper(c); // 소문자를 대문자로 변환한다.
		}

		putchar(c); // 대문자로 변환된 문자를 출력
	}

	return 0; // 프로그램 종료
}
