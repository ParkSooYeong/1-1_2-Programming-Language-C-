/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 1 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int i = 0, j = 0; // 정수형 변수 i, j 선언, 초기값은 0
	int arr[4][6] =
	{
		{ 12, 56, 32, 16, 98, 00 },
		{ 99, 56, 34, 41, 3, 00 },
		{ 65, 3, 87, 78, 21, 00 },
		{ 00, 00, 00, 00, 00, 00 }
	}; // 정수형 2차원 배열 arr 선언, 행의 크기는 4, 열의 크기는 6
	// 00은 합을 저장할 공간

	for (i = 0; i < 3; i++) // 반복문 for 사용, i는 0부터 시작, i가 3이 되기 전까지, 1씩 증가
	{
		for (j = 0; j < 5; j++) // 반복문 for 사용, j는 0부터 시작, j가 5이 되기 전까지, 1씩 증가
		{
			arr[i][5] += arr[i][j]; // 각 열의 덧셈
			arr[3][j] += arr[i][j]; // 각 행의 덧셈
		}
	}

	for (i = 0; i < 6; i++) // 반복문 for 사용, i는 0부터 시작, i가 6이 되기 전까지, 1씩 증가
	{
		arr[3][5] += arr[3][i]; // 총 합 계산
	}

	printf("구분  0열   1열   2열   3열   4열   합계\n"); // 표의 가로축인 열 부분 메시지 출력

	for (i = 0; i < 4; i++) // 반복문 for 사용, i는 0부터 시작, i가 4가 되기 전까지, 1씩 증가
	{
		if (i < 3) // 조건문 if 사용, i가 3 미만이라면 아래 코드 실행
		{
			printf("%d행", i); // 표의 세로축인 행 부분 메시지 출력
		}

		if (i == 3) // 조건문 if 사용, i가 3이라면 아래 코드 실행
		{
			printf("합계"); // 표의 세로축인 행의 마지막 부분 메시지 출력
		}

		for (j = 0; j < 6; j++) // 반복문 for 사용, j는 0부터 시작, j가 6이 되기 전까지, 1씩 증가
		{
			printf("%6d", arr[i][j]); // 표의 형태로 메시지 출력, %6d = 띄어쓰기
		}

		printf("\n"); // 줄바꿈 메시지 출력
	}

	return 0; // 프로그램 종료
}
