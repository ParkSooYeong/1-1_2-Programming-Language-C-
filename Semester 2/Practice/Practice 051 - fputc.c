/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 051 : fputc */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	FILE* fp = NULL; // fp를 NULL문자로 초기화

	fp = fopen("sample.txt", "w"); // 쓰기 모드로 파일을 연다. 파일이 없으면 생성된다.

	if (fp == NULL) // 조건문 if 사용, fp가 NULL문자 일 때, 아래 코드 실행
	{
		printf("파일 열기 실패\n"); // 파일 열기 실패 메시지 출력
	}
	else // 조건문 else-if 사용, 위 if문 조건에 만족하지 않을 시, 아래 코드 실행
	{
		printf("파일 열기 성공\n"); // 파일 열기 성공 메시지 출력
	}

	fputc('a', fp); // 하나의 문자를 fp에 쓴다.
	fputc('b', fp);
	fputc('c', fp);

	fclose(fp); // 파일을 닫음

	return 0; // 프로그램 종료
}
