/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Report 009 : p_344_6 */

#include<stdio.h> // 헤더 파일 포함
#include<stdlib.h> // 헤더 파일 포함
#include<time.h> // 헤더 파일 포함

void print_array(int* A, int size); // 함수 print_array 예비 선언, 정수형 매개배열 A와 정수형 매개변수 size 지정
void fill_array(int* A, int size); // 함수 fill_array 예비 선언, 정수형 매개배열 A와 정수형 매개변수 size 지정
void copy_array(int* A, int* B, int size); // 함수 copy_array 예비 선언, 정수형 매개배열 A,B와 정수형 매개변수 size 지정
void add_array(int* A, int* B, int* C, int size); // 함수 add_array 예비 선언, 정수형 매개배열 A,B,C와 정수형 매개변수 size 지정

int get_array_sum(int* A, int size); // 정수형 함수 get_array_sum 예비 선언, 정수형 매개배열 A와 정수형 매개변수 size 지정

int main(void) // 정수형 함수 main 시작
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 정수형 배열 a 선언, 크기는 10, 원소에 특정값 각각 지정
	int b[10]; // 정수형 배열 b 선언, 크기는 10
	int c[10]; // 정수형 배열 c 선언, 크기는 10

	printf("처음\n"); // 원래 주어진 문제 메시지 출력
	print_array(a, 10); // 함수 print_array 호출, 배열 a와 정수 10 사용

	printf("채우기\n"); // 1-(a) 메시지 출력
	fill_array(a, 10); // 함수 fill_array 호출, 배열 a와 정수 10 사용
	print_array(a, 10); // 함수 print_array 호출, 배열 a와 정수 10 사용

	printf("복사\n"); // 1-(b) 메시지 출력
	copy_array(a, b, 10); // 함수 copy_array 호출, 배열 a,b와 정수 10 사용
	print_array(b, 10); // 함수 print_array 호출, 배열 b와 정수 10 사용

	printf("더하기\n"); // 1-(c) 메시지 출력
	add_array(a, b, c, 10); // 함수 add_array 호출, 배열 a,b,c와 정수 10 사용
	print_array(c, 10); // 함수 print_array 호출, 배열 c와 정수 10 사용

	printf("합계\n"); // 1-(d) 메시지 출력
	printf("%d\n", get_array_sum(a, 10)); // 합계 값 메시지 출력

	return 0; // 프로그램 종료
}

void print_array(int* A, int size)  // 원래 주어진 문제, 함수 print_array 시작, 정수형 매개배열 A와 정수형 매개변수 size 지정
{
	int i; // 정수형 변수 i 선언

	printf("["); // 여는 대괄호 출력

	for (i = 0; i < size; i++) // 반복문 for 사용, i는 0부터 시작하여 size보다 작을때까지 1씩 증가
	{
		printf(" %d ", *(A + i)); // 배열 A의 원소들을 각각 출력, 즉 1부터 10까지의 수를 출력
	}

	printf("]\n"); // 닫는 대괄호를 줄바꿈 포함하여 출력
}

void fill_array(int* A, int size) // 1-(a), 함수 fill_array 시작, 정수형 매개배열 A와 정수형 매개변수 size 지정
{
	int i; // 정수형 변수 i 선언

	srand((unsigned)time(NULL)); // 난수 발생
	//정수 배열의 원소들을 난수를 사용하여 채우는 함수를 작성하여라.
	//난수는 라이브러리 함수는 rand()를 사용한다.

	for (i = 0; i < size; i++) // 반복문 for 사용, i는 0부터 시작하여 size보다 작을때까지 1씩 증가
	{
		A[i] = rand(); // 정수 배열 A[]의 원소들에 난수를 사용하여 각각 채움
	}
}

void copy_array(int* A, int* B, int size) // 1-(b), 함수 copy_array 시작, 정수형 매개배열 A,B와 정수형 매개변수 size 지정
{
	int i; // 정수형 변수 i 선언

	// 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트하여라.

	for (i = 0; i < size; i++) // 반복문 for 사용, i는 0부터 시작하여 size보다 작을때까지 1씩 증가
	{
		B[i] = A[i]; // 정수 배열 A[]를 다른 정수 배열 B[]에 복사
	}
}

void add_array(int* A, int* B, int* C, int size) // 1-(c), 함수 add_array 시작, 정수형 매개배열 A,B,C와 정수형 매개변수 size 지정
{
	int i; // 정수형 변수 i 선언

	// 서로 대응되는 배열 A[]의 원소와 배열 B[]의 원소를 더하여 배열
	// C[]에 저장하는 함수를 작성하고 테스트하여라.
	// 즉 모든 i에 대하여 C[i] = A[i] +B[i]가 된다.

	for (i = 0; i < size; i++) // 반복문 for 사용, i는 0부터 시작하여 size보다 작을때까지 1씩 증가
	{
		C[i] = A[i] + B[i]; // 배열 A[]의 원소와 배열 B[]의 원소를 더하여 배열 C[]에 저장
	}
}

int get_array_sum(int* A, int size) // 1-(d), 함수 get_array_sum 시작, 정수형 매개배열 A와 정수형 매개변수 size 지정
{
	int i; // 정수형 변수 i 선언
	int sum = 0; // 정수형 변수 sum 선언, 초기값은 0

	// 정수형 배열 원소들의 합을 구하여 반환하는 함수를 작성하고 테스트하여라.

	for (i = 0; i < size; i++) // 반복문 for 사용, i는 0부터 시작하여 size보다 작을때까지 1씩 증가
	{
		sum += A[i]; // = sum + A[i]
	}

	return sum; // sum 값을 반환
}
