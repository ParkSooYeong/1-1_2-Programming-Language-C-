/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 011 : Min & Max */

#include <stdio.h> // 헤더 파일 포함

#define SIZE 5 // SIZE를 5라고 정의

int main(void) // 정수형 함수 main 시작
{
	int grade[SIZE]; // 정수형 배열 grade를 SIZE 참조하여 선언
	int i, min, max; // 정수형 변수 i, min, max 선언

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작하여 SIZE 미만까지 1씩 증가
	{
		printf("성적을 입력하세요 : "); // 성적 입력 메시지 출력
		scanf("%d", &grade[i]); // 성적 각각 입력받아서 배열 grade에 각각 저장
	}

	min = grade[0]; // 최소값은 grade[0]
	max = grade[4]; // 최대값은 grade[4]

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작하여 SIZE 미만까지 1씩 증가
	{
		if (grade[i] < min) // 조건문 if 사용, 원소 중 min보다 작은 값이 ↓
		{
			min = grade[i]; // 최소값이 됨
		}
	}

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작하여 SIZE 미만까지 1씩 증가
	{
		if (grade[i] > max) // 조건문 if 사용, 원소 중 max보다 큰 값이 ↓
		{
			max = grade[i]; // 최대값이 됨
		}
	}

	printf("최소값은 %d입니다.\n", min); // 최소값 메시지 출력
	printf("최대값은 %d입니다.\n", max); // 최대값 메시지 출력

	return 0; // 프로그램 종료
}
