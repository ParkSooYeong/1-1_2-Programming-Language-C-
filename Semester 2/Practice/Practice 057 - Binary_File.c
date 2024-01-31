/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 057 : Binary_File */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

#define SIZE 3 // SIZE를 3이라고 정의

struct student // 구조체 student 정의
{
	int number; // 학번
	char name[20]; // 이름
	double gpa; // 평점
};

int main(void) // 정수형 함수 main 시작
{
	struct student table[SIZE] = // 구조체 student 배열 table 선언, 크기는 SIZE
	{
		{ 1, "Kim", 3.99 }, // 구조체 멤버 선언
		{ 2, "Min", 2.68 }, // 구조체 멤버 선언
		{ 3, "Lee", 4.01 } // 구조체 멤버 선언
	};

	struct student s; // 구조체 stdent 변수 s 선언
	FILE* fp = NULL; // 파일 모드 포인터 fp 선언, 초기값은 NULL
	int i; // 정수형 변수 i 선언

	// 이진 파일을 쓰기 모드로 연다.
	if ((fp = fopen("student.txt", "wb")) == NULL) // 조건문 if 사용, student.txt(dat) 파일을 이진 파일 쓰기 모드로 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n"); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	// 배열을 파일에 저장한다.
	fwrite(table, sizeof(struct student), SIZE, fp); // 이진 파일 모드로 다음 항목들을 작성
	fclose(fp); // 파일 닫음

	// 이진 파일을 읽기 모드로 연다.
	if ((fp = fopen("student.txt", "rb")) == NULL) // 조건문 if 사용, student.txt(dat) 파일을 이진 파일 읽기 모드로 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n"); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작하여 SIZE가 되기 전까지 1씩 증가하며 아래 코드 실행
	{
		fread(&s, sizeof(struct student), 1, fp); // 이진 파일 모드로 다음 항목들을 읽음

		printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name, s.gpa); // 정보 메시지 출력
	}

	fclose(fp); // 파일 닫음

	return 0; // 프로그램 종료
}
