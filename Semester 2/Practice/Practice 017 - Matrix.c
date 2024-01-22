/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 017 : Matrix */

#include <stdio.h> // 헤더 파일 포함

#define ROWS 3 // ROWS를 3이라고 정의
#define COLS 3 // COLS를 3이라고 정의

int main(void) // 정수형 함수 main 시작
{
	int A[ROWS][COLS] =
	{
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5}
	}; // 정수형 2차원 배열 A 초기값 포함 선언(3x3), 행 ROWS, 열 COLS

	int B[ROWS][COLS] =
	{
		{1, 0, 0},
		{1, 0, 0},
		{1, 0, 0}
	}; // 정수형 2차원 배열 B 초기값 포함 선언(3x3), 행 ROWS, 열 COLS

	int C[ROWS][COLS]; // 정수형 2차원 배열 C 선언, 행 ROWS, 열 COLS
	int r, c; // 정수형 변수 r, c 선언

	// 두 개의 행렬을 더한다.
	for (r = 0; r < ROWS; r++) // 반복문 for 사용, r은 0부터 시작, r이 ROWS가 되기 전까지, 1씩 증가
	{
		for (c = 0; c < COLS; c++) // 반복문 for 사용, c은 0부터 시작, c가 COLS가 되기 전까지, 1씩 증가
		{
			C[r][c] = A[r][c] + B[r][c]; // 행렬 덧셈식 계산
		}
	}

	// 행렬을 출력한다.
	for (r = 0; r < ROWS; r++) // 반복문 for 사용, r은 0부터 시작, r이 ROWS가 되기 전까지, 1씩 증가
	{
		for (c = 0; c < COLS; c++) // 반복문 for 사용, c은 0부터 시작, c가 COLS가 되기 전까지, 1씩 증가
		{
			printf("%d ", C[r][c]); // 행렬 덧셈 계산된 2차원 배열 C 메시지 출력
		}

		printf("\n"); // 줄바꿈 메시지 출력
	}

	return 0; // 프로그램 종료
}
