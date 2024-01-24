/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 026 : p_344_6 */

#include <stdio.h> // 헤더 파일 포함

int add(int x, int y); // 정수형 함수 add 예비 선언, 정수형 매개변수 x, y 지정
int sub(int x, int y); // 정수형 함수 sub 예비 선언, 정수형 매개변수 x, y 지정
int mul(int x, int y); // 정수형 함수 mul 예비 선언, 정수형 매개변수 x, y 지정
int div(int x, int y); // 정수형 함수 div 예비 선언, 정수형 매개변수 x, y 지정

int main(void) // 정수형 함수 main 시작
{
	int i, result; // 정수형 변수 i, result 선언
	int x, y; // 정수형 변수 x, y 선언
	int (*pf[4])(int, int) = { add, sub, mul, div }; // 함수 포인터 배열을 선언하고 초기화한다.

	while (1) // 반복문 while 사용, 특수 조건이 아닌 이상 아래 코드 실행과 함께 무한 루프 발동
	{
		printf("====================\n"); // 메뉴 메시지 출력
		printf("0. 덧셈\n"); // 메뉴 메시지 출력
		printf("1. 뺄셈\n"); // 메뉴 메시지 출력
		printf("2. 곱셈\n"); // 메뉴 메시지 출력
		printf("3. 나눗셈\n"); // 메뉴 메시지 출력
		printf("4. 종료\n"); // 메뉴 메시지 출력
		printf("====================\n"); // 메뉴 메시지 출력
		printf("\n"); // 메뉴 줄바꿈 메시지 출력
		printf("메뉴를 선택하세요 : "); // 메뉴 선택 지시 메시지 출력
		scanf("%d", &i); // 입력받은 숫자를 변수 i에 저장

		if (i != 4) // 조건문 if 사용, i가 4가 아닐때, 아래 코드 실행
		{
			printf("2개의 정수를 입력하시오 : "); // 정수 2개 입력 지시 메시지 출력
			scanf("%d %d", &x, &y); // 입력받은 값들을 각각 x와 y에 저장
		}
		else // 조건문 else-if문 사용, i가 4일 때, 아래 코드 실행
		{
			return -1; // -1을 반환(= 프로그램 종료)
		}

		switch (i) // 조건문 switch 사용, i에 대하여 조건에 맞는 아래 코드들을 실행
		{
			case 0: // i가 0일 때,
			{
				result = pf[i](x, y); // 배열 pf의 첫번째 원소의 함수 호출, 변수 x와 y 사용

				break; // 조건문 switch 탈출
			}
			case 1: // i가 1일 때,
			{
				result = pf[i](x, y); // 배열 pf의 두번째 원소의 함수 호출, 변수 x와 y 사용

				break; // 조건문 switch 탈출
			}
			case 2: // i가 2일 때,
			{
				result = pf[i](x, y); // 배열 pf의 세번째 원소의 함수 호출, 변수 x와 y 사용

				break; // 조건문 switch 탈출
			}
			case 3: // i가 3일 때,
			{
				result = pf[i](x, y); // 배열 pf의 네번째 원소의 함수 호출, 변수 x와 y 사용

				break; // 조건문 switch 탈출
			}
		}

		printf("연산 결과 = %d\n", result); // 연산 결과 메시지 출력
		printf("\n"); // 줄바꿈 메시지 출력
		printf("\n"); // 줄바꿈 메시지 출력
		printf("\n"); // 줄바꿈 메시지 출력
		printf("\n"); // 줄바꿈 메시지 출력
		printf("\n"); // 줄바꿈 메시지 출력
	}

	return 0; // 프로그램 종료
}

int add(int x, int y) // 정수형 함수 add 시작, 정수형 매개변수 x와 y 지정
{
	return x + y; // 변수 x와 y를 사용하여, 덧셈한 값을 반환
}

int sub(int x, int y) // 정수형 함수 sub 시작, 정수형 매개변수 x와 y 지정
{
	return x - y; // 변수 x와 y를 사용하여, 뺄셈한 값을 반환
}

int mul(int x, int y) // 정수형 함수 mul 시작, 정수형 매개변수 x와 y 지정
{
	return x * y; // 변수 x와 y를 사용하여, 곱셈한 값을 반환
}

int div(int x, int y) // 정수형 함수 div 시작, 정수형 매개변수 x와 y 지정
{
	return x / y; // 변수 x와 y를 사용하여, 나눗셈한 값을 반환
}
