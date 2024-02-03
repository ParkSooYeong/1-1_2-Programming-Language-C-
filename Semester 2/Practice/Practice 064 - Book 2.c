/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 064 : Book 2 */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

#define S_SIZE 50 // S_SIZE를 50이라고 정의

typedef struct NODE // 구조체 book 정의
{
	char title[S_SIZE]; // 문자형 배열 멤버 title 정의, 크기는 S_SIZE
	int year; // 정수형 변수 멤버 year 정의
	struct NODE* link; // 노드의 타입을 정의
} NODE;

int main(void) // 정수형 함수 main 시작
{
	NODE* list = NULL; // 노드를 가리키는 포인터 정의
	NODE* prev, * p, * next; // 노드를 가리키는 포인터 정의
	char buffer[S_SIZE]; // 문자형 배열 buffer 선언, 크기는 S_SIZE
	int year; // 정수형 변수 year 선언

	// 연결 리스트에 정보를 입력한다.
	while (1) // 반복문 while 사용, 특정 지시 없을 시 아래 코드 무한 반복 실행
	{
		printf("책의 제목을 입력하세요. : (종료하려면 엔터)"); // 책 제목 입력 지시 메시지 출력
		gets(buffer); // 제목을 입력받아서 buffer에 저장

		if (buffer[0] == '\0') // 조건문 if 사용, 엔터를 입력받았을 시 아래 코드 실행
		{
			break; // 반복문 탈출
		}

		p = (NODE*)malloc(sizeof(NODE)); // 동적 메모리 할당

		strcpy(p->title, buffer); // 입력받은 책 제목을 복사

		printf("책의 출판 연도를 입력하세요. : "); // 책 출판 연도 입력 지시 메시지 출력
		gets(buffer); // 출판 연도를 입력 받아서 buffer에 저장

		year = atoi(buffer);
		p->year = year;

		if (list == NULL) // 조건문 if 사용, list가 NULL일 시 아래 코드 실행
		{
			list = p;
		}
		else // 조건문 else-if 사용, 위의 if문이 실행되지 않을 시 아래 코드 실행
		{
			prev->link = p;
		}

		p->link = NULL;
		prev = p;
	}

	printf("\n"); // 줄바꿈 메시지 출력

	// 연결 리스트에 들어 있는 정보를 모두 출력한다.
	p = list;

	while (p != NULL) // 반복문 while 사용, p가 NULL이 아니면 아래 코드 반복 실행
	{
		printf("책의 제목 : %s , 출판 연도 : %d \n", p->title, p->year); // 제목과 출판 연도 메시지 출력

		p = p->link; // 연결 리스트 안의 노드 순회
	}

	// 동적 할당을 반납한다.
	p = list;

	while (p != NULL) // 반복문 while 사용, p가 NULL이 아니면 아래 코드 반복 실행
	{
		next = p->link;

		free(p); // 동적 메모리 반납

		p = next;
	}

	return 0; // 프로그램 종료
}
