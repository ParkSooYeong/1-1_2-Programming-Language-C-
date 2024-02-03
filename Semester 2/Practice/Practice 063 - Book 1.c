/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 063 : Book 1 */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

#define S_SIZE 50 // S_SIZE를 50이라고 정의
#define MAX_BOOKS 50 // MAX_BOOKS를 50이라고 정의

struct book // 구조체 book 정의
{
	char title[S_SIZE]; // 문자형 배열 멤버 title 정의, 크기는 S_SIZE
	int year; // 정수형 변수 멤버 year 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct book books[MAX_BOOKS]; // 배열 사용, 구조체 book 배열 books 선언, 크기는 MAX_BOOKS
	char buffer[S_SIZE]; // 문자형 배열 buffer 선언, 크기는 S_SIZE
	int n = 0, i, year; // 정수형 변수 n, i, year 선언, n의 크기는 0

	while (n < MAX_BOOKS) // 반복문 while 사용, n이 MAX_BOOKS보다 작으면 아래 코드 반복 실행
	{
		printf("책의 제목을 입력하세요. : (종료하려면 엔터)"); // 책 제목 입력 지시 메시지 출력
		gets(buffer); // 제목을 입력받아서 buffer에 저장

		if (buffer[0] == '\0') // 조건문 if 사용, 엔터를 입력받았을 시 아래 코드 실행
		{
			break; // 반복문 탈출
		}

		strcpy(books[n].title, buffer); // 입력받은 책 제목을 복사

		printf("책의 출판 연도를 입력하세요. : "); // 책 출판 연도 입력 지시 메시지 출력
		gets(buffer); // 출판 연도를 입력 받아서 buffer에 저장

		year = atoi(buffer);
		books[n].year = year;
		n++; // = n + 1
	}

	printf("\n"); // 줄바꿈 메시지 출력

	for (i = 0; i < n; i++) // 반복문 for 사용, i는 0부터 시작하여 n이 되기 전까지 1씩 증가하면서 아래 코드 실행
	{
		printf("책의 제목 : %s , 출판 연도 : %d \n", books[i].title, books[i].year); // 제목과 출판 연도 메시지 출력
	}

	return 0; // 프로그램 종료
}
