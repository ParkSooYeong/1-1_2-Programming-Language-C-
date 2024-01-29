/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 052 : fgetc */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	FILE* fp = NULL; // fp를 NULL문자로 초기화
	int c; // 정수형 변수 c 선언

	fp = fopen("sample.txt", "r"); // 읽기 모드로 파일 오픈, 경로에 파일이 없을 시 파일 열기 불가능

	if (fp == NULL) // 조건문 if 사용, fp가 NULL문자 일 때, 아래 코드 실행
	{
		printf("파일 열기 실패\n"); // 파일 열기 실패 메시지 출력
	}
	else // 조건문 else-if 사용, 위 if문 조건에 만족하지 않을 시, 아래 코드 실행
	{
		printf("파일 열기 성공\n"); // 파일 열기 성공 메시지 출력
	}

	while ((c = fgetc(fp)) != EOF) // 반복문 while 사용, 하나의 문자를 fp에서 읽어서 c에 대입한다.
	{
		putchar(c); // 조건에서 읽은 문자 출력
	}

	fclose(fp); // 파일을 닫음

	return 0; // 프로그램 종료
}
