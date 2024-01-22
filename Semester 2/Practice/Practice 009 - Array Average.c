/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 009 : Array Average */

#include <stdio.h> // 헤더 파일 포함

#define STUDENTS 5 // STUDENTS를 5라고 정의

int main(void) // 정수형 함수 main 시작
{
	int grade[STUDENTS]; // 정수형 배열 grade 선언
	int sum = 0; // 정수형 변수 sum 선언, 초기값 0
	int i, average; // 정수형 변수 i, average 선언

	for (i = 0; i < STUDENTS; i++) // 반복문 for 사용, i는 0부터 시작하여 STUDENTS 미만까지 i를 1씩 증가
	{
		printf("학생들의 성적을 입력하세요 : "); // 성적 입력 지시 메시지 출력
		scanf("%d", &grade[i]); // 성적을 입력받아 배열 grade의 원소에 각각 저장
	}

	for (i = 0; i < STUDENTS; i++) // 반복문 for 사용, i는 0부터 시작하여 STUDENTS 미만까지 i를 1씩 증가
	{
		sum += grade[i]; // = sum + grade[i]
	}

	average = sum / STUDENTS; // 성적 평균 계산

	printf("성적 합계 = %d\n", sum); // 성적 합계 메시지 출력
	printf("성적 평균 = %d\n", average); // 성적 평균 메시지 출력

	return 0; // 프로그램 종료
}
