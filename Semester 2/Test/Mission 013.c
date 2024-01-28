/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 013 */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

typedef struct music // 구조체 music 정의
{
	char title[100]; // 문자형 멤버 배열 title 정의, 크기는 100
	int year; // 정수형 멤버 변수 year 정의
} MUSIC; // MUSIC 타입으로 재정의

int main(void) // 정수형 함수 main 시작
{
	MUSIC m; // 11-(a), MUSIC을 이용하여 구조체 m을 선언

	MUSIC music_library[100]; // 12, MUSIC 타입의 배열 선언
	int i; // 12, 정수형 변수 i 선언

	MUSIC* p = &m; // 11-(b), MUSIC을 가리키는 포인터 p를 선언하고 m의 주소로 초기화
	strcpy(m.title, "Yesterday"); // 11-(c), m의 title에 "Yesterday"를 저장
	p->year = 1963; // 11-(d), p를 통하여 m의 year에 1963을 저장

	printf("%s(%d)\n", m.title, m.year); // Yesterday와 1963 메시지 출력

	for (i = 0; i < 2; i++) // 반복문 for 사용, i는 0부터 시작하여 2가 되기 전까지 1씩 증가하며 아래 코드 실행
	{
		scanf("%s", music_library[i].title); // 제목을 입력받아서 title에 저장
		scanf("%d", &music_library[i].year); // 연도를 입력받아서 year에 저장
	}

	for (i = 0; i < 2; i++) // 반복문 for 사용, i는 0부터 시작하여 2가 되기 전까지 1씩 증가하며 아래 코드 실행
	{
		printf("%s(%d)\n", music_library[i].title, music_library[i].year); // 입력받은 제목과 연도 메시지 출력
	}

	return 0; // 프로그램 종료
}
