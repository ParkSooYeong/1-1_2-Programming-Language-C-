/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 058 : fseek */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

#define SIZE 1000 // SIZE를 3이라고 정의

void init_table(int table[], int size); // 함수 init_table 예비 선언

int main(void) // 정수형 함수 main 시작
{
	int table[SIZE]; // 정수형 배열 table 선언, 크기는 SIZE
	int n, data; // 정수형 변수 n, data 선언
	long pos; // 실수형 변수 pos 선언
	FILE* fp = NULL; // 파일 모드 포인터 fp 선언, 초기값 NULL

	// 배열을 초기화한다.
	init_table(table, SIZE); // 함수 init_table 시작, table, SIZE 참조

	// 이진파일을 쓰기 모드로 연다.
	if ((fp = fopen("sample.txt", "wb")) == NULL) // 조건문 if 사용, sample.txt(dat) 파일을 이진 파일 쓰기 모드로 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n"); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	// 배열을 이진 모드로 파일에 저장한다.
	fwrite(table, sizeof(int), SIZE, fp); // 이진 파일 모드로 다음 항목들을 작성
	fclose(fp); // 파일 닫음

	// 이진 파일을 읽기 모드로 연다.
	if ((fp = fopen("sample.txt", "rb")) == NULL) // 조건문 if 사용, sample.txt(dat) 파일을 이진 파일 읽기 모드로 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n"); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	while (1) // 반복문 while 사용, 특정 행위를 하기 전까지는 무한 반복
	{
		printf("파일에서의 위치를 입력하십시오(0에서 %d, 종료 -1) : ", SIZE - 1); // 입력 지시 메시지 출력
		scanf("%d", &n); // 입력 받은 값을 n에 저장

		if (n == -1) // 조건문 if 사용, n이 -1일 시 아래 코드실행
		{
			break; // 반복문 탈출
		}

		pos = (long)n * sizeof(int);
		fseek(fp, pos, SEEK_SET);
		fread(&data, sizeof(int), 1, fp);

		printf("%d 위치의 값은 %d입니다.\n", n, data); // 결과 메시지 출력
	}

	fclose(fp); // 파일 닫음

	return 0; // 프로그램 종료
}

// 배열을 인덱스의 제곱으로 채운다.
void init_table(int table[], int size) // 함수 init_table 시작, table, SIZE 참조
{
	int i; // 정수형 변수 i 선언

	for (i = 0; i < size; i++) // 반복문 for 사용, i는 0부터 시작하여 size가 되기 전까지 1씩 증가하며 아래 코드 실행
	{
		table[i] = i * i;
	}
}
