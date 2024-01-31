/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 056 : Binary */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int buffer[] = { 10, 20, 30, 40, 50 }; // 정수형 배열 buffer 선언, 지정된 값들을 각각의 원소에 대입
	FILE* fp = NULL; // 파일 모드 포인터 fp 선언, 초기값 NULL
	size_t size, count; // size_t형 변수 size, count 선언

	fp = fopen("binary.txt", "wb"); // 파일을 (쓰기+이진 파일) 모드로 연다.

	if (fp == NULL) // 조건문 if 사용, 파일을 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "binary.txt 파일을 열 수 없습니다."); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	size = sizeof(buffer[0]); // 배열 buffer의 첫번째 원소 값의 크기를 size에 저장
	count = sizeof(buffer) / sizeof(buffer[0]); // 배열 buffer의 전체 크기를 한 원소의 크기로 나눔, 그 나눈 값을 count에 저장

	fwrite(buffer, size, count, fp); // count만큼의 항목을 buffer에서 fp로 쓴다.

	return 0; // 프로그램 종료
}
