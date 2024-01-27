/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 010 */

#include <stdio.h> // 헤더 파일 포함

struct days // 구조체 days 정의
{
	int year; // 정수형 멤버 변수 year 정의
	int month; // 정수형 멤버 변수 month 정의
	int day; // 정수형 멤버 변수 day 정의
};

struct email // 구조체 email 정의
{
	char title[20]; // 문자형 멤버 배열 title 정의, 크기는 20
	char inputer[30]; // 문자형 멤버 배열 inputer 정의, 크기는 30
	char outputer[30]; // 문자형 멤버 배열 outputer 정의, 크기는 30
	char content[30]; // 문자형 멤버 배열 content 정의, 크기는 30
	struct days d; // 구조체 days 변수 d 정의
	int rank; // 정수형 멤버 변수 rank 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct email e; // 구조체 email 변수 e 선언

	printf("이메일 제목을 입력하세요 : "); // 이메일 제목 입력 지시 메시지 출력
	scanf("%s", e.title); // 입력받은 제목 저장
	printf("이메일 수신자를 입력하세요 : "); // 이메일 수신자 입력 지시 메시지 출력
	scanf("%s", e.inputer); // 입력받은 수신자 저장
	printf("이메일 발신자를 입력하세요 : "); // 이메일 발신자 입력 지시 메시지 출력
	scanf("%s", e.outputer); // 입력받은 발신자 저장
	printf("이메일 내용을 입력하세요 : "); // 이메일 내용 입력 지시 메시지 출력
	scanf("%s", e.content); // 입력받은 내용 저장
	printf("이메일 날짜(년,월,일)를 입력하세요 : "); // 이메일 날짜 입력 지시 메시지 출력
	scanf("%d", &e.d.year); // 입력받은 연도 저장
	scanf("%d", &e.d.month); // 입력받은 월 저장
	scanf("%d", &e.d.day); // 입력받은 일 저장
	printf("이메일 우선 순위를 입력하세요 : "); // 이메일 우선 순위 입력 지시 메시지 출력
	scanf("%d", &e.rank); // 입력받은 우선 순위 저장

	printf("제목 : %s\n", e.title); // 이메일 제목 출력
	printf("수신자 : %s님\n", e.inputer); // 이메일 수신자 출력
	printf("발신자 : %s님\n", e.outputer); // 이메일 발신자 출력
	printf("내용 : %s\n", e.content); // 이메일 내용 출력
	printf("날짜 : %d년 %d월 %d일\n", e.d.year, e.d.month, e.d.day); // 이메일 날짜 출력
	printf("우선 순위 : %d순위\n", e.rank); // 이메일 우선 순위 출력

	return 0; // 프로그램 종료
}
