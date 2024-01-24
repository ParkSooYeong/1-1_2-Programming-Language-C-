/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 024 : Pointer_Function */

#include <stdio.h> // 헤더 파일 포함

#define SIZE 5 // SIZE를 5라고 정의

double get_avg(int values[], int n); // 실수형 함수 get_avg 예비 선언, 정수형 매개배열 values와 정수형 변수 n 지정
void check_values(int vaiues[], int n); // 함수 check_values 예비 선언, 정수형 매개배열 values와 정수형 변수 n 지정

int main(void) // 정수형 함수 main 시작
{
	int i; // 정수형 지역변수 i 선언
	int data[5]; // 정수형 지역배열 data 선언, 크기는 5
	double result; // 실수형 지역변수 result 선언

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작, SIZE보다 작을 때까지, 1씩 증가
	{
		printf("%d번째 값을 입력하시오 : ", i + 1); // 값 입력 지시 메시지 출력
		scanf("%d", &data[i]); // 값을 입력받아서 배열 data의 원소 i에 저장
	}

	check_values(data, SIZE); // 함수 check_values 호출, 배열 data와 SIZE 사용
	result = get_avg(data, SIZE); // 함수 get_avg 호출, 배열 data와 SIZE 사용, result에 함수 값 저장

	printf("값들의 평균은 %f\n", result); // 평균 메시지 출력

	return 0; // 프로그램 종료
}

void check_values(int values[], int n) // 함수 check_values 시작, 정수형 매개배열 values와 정수형 변수 n 지정
{
	int i; // 정수형 지역변수 i 선언

	for (i = 0; i < n; i++) // 반복문 for 사용, i는 0부터 시작, n보다 작을 때까지, 1씩 증가
	{
		if (values[i] < 0) // 조건문 if 사용, 배열 values의 원소 i가 0보다 작을 시
		{
			values[i] = 0; // 배열 values의 원소 i를 0이라고 저장
		}
	}
}

double get_avg(int values[], int n) // 실수형 함수 get_avg 시작, 정수형 매개배열 values와 정수형 변수 n 지정
{
	int i; // 정수형 변수 i 선언
	double sum = 0.0; // 실수형 변수 sum 선언, 초기값은 0.0

	for (i = 0; i < n; i++) // 반복문 for 사용, i는 0부터 시작, n보다 작을 때까지, 1씩 증가
	{
		sum += values[i]; // = sum + values[i]
	}

	return sum / n; // sum을 n으로 나눈 값을 반환
}
