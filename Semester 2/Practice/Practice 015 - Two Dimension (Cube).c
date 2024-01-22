/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 015 : Two Dimension (Cube) */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int s[3][5]; // 정수형 2차원 배열 s 선언, 행의 크기 3, 열의 크기 5
	int i, j; // 정수형 변수 i, j 선언
	int value = 0; // 정수형 변수 value 선언, 초기값은 0

	for (i = 0; i < 3; i++) // 반복문 for 사용, i는 0부터 시작, i가 3이 되기 전까지, 1씩 증가
	{
		for (j = 0; j < 5; j++) // 반복문 for 사용, j는 0부터 시작, j가 5이 되기 전까지, 1씩 증가
		{
			s[i][j] = value++; // 2차원 배열 s에 따른 value 1씩 증가
		}
	}

	for (i = 0; i < 3; i++) // 반복문 for 사용, i는 0부터 시작, i가 3이 되기 전까지, 1씩 증가
	{
		for (j = 0; j < 5; j++) // 반복문 for 사용, j는 0부터 시작, j가 5이 되기 전까지, 1씩 증가
		{
			printf("%d ", s[i][j]); // 2차원 배열 s의 값 메시지 출력
		}

		printf("\n"); // 줄바꿈 메시지 출력
	}

	return 0; // 프로그램 종료
}
