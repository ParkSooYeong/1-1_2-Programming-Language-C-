/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 030 : getch */

// getch()의 사용
#include <conio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int ch; // 정수형 변수 ch 선언, 정수형에 주의

	while (1) // 반복문 while 사용, 무한 반복
	{
		ch = getch(); // 문자를 즉시 입력받는다.

		if (ch == 'q') // 조건문 if 사용, 문자를 입력받는데 입력 받은 문자가 q일 경우 아래 코드 실행
		{
			break; // 반복문 탈출
		}

		putch(ch); // 문자를 즉시 출력한다.
	}

	return 0; // 프로그램 종료
}
