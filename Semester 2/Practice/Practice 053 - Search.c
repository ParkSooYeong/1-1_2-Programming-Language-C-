/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 053 : Search */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	FILE* fp; // 파일형 포인터 fp 선언
	char fname[128]; // 문자형 배열 fname 선언, 크기는 128
	char buffer[256]; // 문자형 배열 buffer 선언, 크기는 256
	char word[256]; // 문자형 배열 word 선언, 크기는 256
	int line_num = 0; // 정수형 변수 line_num 선언, 초기값은 0

	printf("입력 파일 이름을 입력하세요. : "); // 파일 이름 입력 지시 메시지 출력
	scanf("%s", fname); // 파일 이름 입력 받아서 fname에 저장

	printf("탐색할 단어를 입력하세요. : "); // 탐색 단어 입력 지시 메시지 출력
	scanf("%s", word); // 탐색 단어 입력 받아서 word에 저장

	// 파일을 읽기 모드로 연다.

	if ((fp = fopen(fname, "r")) == NULL) // 조건문 if 사용, 읽기 모드로 파일 오픈, 이 행위가 NULL 값을 만족할 시
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname); // 파일 오픈 불가능 메시지 출력

		exit(1); // 탈출
	}

	while (fgets(buffer, 256, fp)) // 반복문 while 사용, 조건에 따라 반복
	{
		line_num++; // = line_num + 1

		if (strstr(buffer, word)) // 조건문 if 사용, buffer 안에 word가 있으면 참
		{
			printf("%s : %d 단어 %s이 발견되었습니다.\n", fname, line_num, word); // 단어 발견 메시지 출력
		}
	}

	fclose(fp); // 파일 닫음

	return 0; // 프로그램 종료
}
