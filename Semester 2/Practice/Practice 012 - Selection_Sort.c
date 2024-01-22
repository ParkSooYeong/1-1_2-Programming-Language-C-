/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 012 : Selection_Sort */

#include <stdio.h> // 헤더 파일 포함

#define SIZE 10 // SIZE를 10이라고 정의

int main(void) // 정수형 함수 main 시작
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 }; // 정수형 배열 list 선언, SIZE로 크기 지정
	int i, j, temp, least; // 정수형 변수 각각 선언

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작, SIZE가 되기 전까지, 1씩 증가
	{
		printf("%d ", list[i]); // 배열 값 메시지 출력
	}

	printf("\n"); // 줄바꿈 메시지 출력

	for (i = 0; i < SIZE - 1; i++) // 반복문 for 사용, i는 0부터 시작, SIZE-1이 되기 전까지, 1씩 증가
	{
		least = i; // 최솟값

		for (j = i + 1; j < SIZE; j++) // 반복문 for 사용, i는 0부터 시작, SIZE-1이 되기 전까지, 1씩 증가
		{
			if (list[j] < list[least]) // 조건문 if 사용, 오름차순 부등식
			{
				least = j; // 최솟값이 첫번째 원소가 됨
			}
		}

		temp = list[i]; // 자리바꿈 1단계
		list[i] = list[least]; // 자리바꿈 2단계
		list[least] = temp; // 자리바꿈 3단계
	}

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작, SIZE가 되기 전까지, 1씩 증가
	{
		printf("%d ", list[i]); // 정렬된 값 메시지 출력
	}

	printf("\n"); // 줄바꿈 메시지 출력

	return 0; // 프로그램 종료
}
