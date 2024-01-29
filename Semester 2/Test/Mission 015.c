/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 015 */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

#define SIZE 100 // SIZE를 100이라고 정의

int main(void) // 정수형 함수 main 시작
{
	FILE* fp = NULL; // fp를 NULL문자로 초기화
	char name[SIZE]; // 문자형 배열 name 선언, 크기는 SIZE
	char line[SIZE]; // 문자형 배열 line 선언, 크기는 SIZE
	int count1, count2, i; // 정수형 변수 count1, 2, i 선언

	printf("파일 이름을 입력하세요. : "); // 파일 이름 입력 지시 메시지 출력
	gets(name); // 파일 이름 입력 받아서 name에 저장

	if ((fp = fopen(name, "w")) == NULL) // 조건문 if 사용, 쓰기 모드로 파일 오픈, 이 행위가 NULL값을 만족할 시
	{
		printf("파일 열기 오류\n"); // 파일 열기 실패 메시지 출력

		exit(1); // 탈출
	}

	while (1) // 반복문 while 사용, 특정 조건 없을 시 무한 반복
	{
		line[0] = '\0'; // Ctrl + Z
		count1 = 0; // count1 값 0으로 초기화
		count2 = 0; // count2 값 0으로 초기화
		fgets(line, SIZE, stdin); // 입력 파트

		for (i = 0; line[i] != '\0'; i++) // 반복문 for 사용, i는 0부터 시작하여 Ctrl+Z 를 만나기 전까지 1씩 증가
		{
			count1++; // = count + 1

			if ((line[i] == ' ') || (line[i] == '\t') || (line[i] == '\n')) // 조건문 if 사용, line[i]에 따른 조건들 만족 시
			{
				count2++; // = count2 + 1
			}
		}

		if (count1 == count2) // 조건문 if 사용, count1과 count2가 같을 시
		{
			break; // 반복문 탈출
		}

		fputs(line, fp); // 저장
	}

	fclose(fp); // 파일 닫기

	return 0; // 프로그램 종료
}
