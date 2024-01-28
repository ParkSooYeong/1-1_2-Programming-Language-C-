/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 044 : enum */

// 열거형
#include <stdio.h> // 헤더 파일 포함

enum days { MON, TUE, WED, THU, FRI, SAT, SUN }; // 열거형 days 정의

char* days_name[] = { // 문자형 포인터 배열 days_name 정의
	"monday",
	"tuesday",
	"wednesday",
	"thursday",
	"friday",
	"saturday",
	"sunday"
};

int main(void) // 정수형 함수 main 시작
{
	enum days d; // 열겨형 days 변수 d 선언

	for (d = MON; d <= SUN; d++) // 반복문 for 사용, d는 MON(0)부터 시작하여 SUN(6)이 될 때까지 1씩 증가하면서 아래 코드 실행
	{
		printf("%d번째 요일의 이름은 %s입니다\n", d, days_name[d]); // 메시지 출력
	}

	return 0; // 프로그램 종료
}
