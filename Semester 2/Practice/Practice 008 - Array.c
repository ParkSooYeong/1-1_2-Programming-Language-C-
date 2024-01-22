/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 008 : Array */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

#define SIZE 5 // SIZE를 5라고 정의

int main(void) // 정수형 함수 main 시작
{
	int i; // 정수형 변수 i 선언
	int grade[SIZE]; // 정수형 배열 grade 선언

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i를 0부터 시작하여 SIZE 미만까지 1씩 증가
	{
		grade[i] = rand() % 100; // 배열 grade에 난수를 사용하여 값 지정 (난수는 100으로 나누어 정수형으로 변환)
	}

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i를 0부터 시작하여 SIZE 미만까지 1씩 증가
	{
		printf("grade[%d] = %d\n", i, grade[i]); // 증가하는 i에 따라 그에 맞는 메시지 출력
	}

	return 0; // 프로그램 종료
}
