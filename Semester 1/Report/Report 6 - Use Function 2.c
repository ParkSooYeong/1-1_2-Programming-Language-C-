/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Report 6 : Use Function 2 */

#include <stdio.h> // 헤더 파일 포함

int sum_3 = 0, sum_4 = 0; // 3의 배수 총합(sum_3), 4의 배수 총합(sum_4) 변수 각각 미리 지정
int i = 0; // 문제에서 제시한 i 미리 지정 (초기값은 0)
int count = 0, count_3 = 0, count_4 = 0; // i값 카운트 횟수(count), 3의 배수 카운트 횟수(count_3), 4의 배수 카운트 횟수(count_4) 변수 각각 미리 지정

void A(void) // 첫번째 함수 지정, 함수 이름은 'A'
{
	for(i = 0; (3456 >= sum_3 - sum_4) || (3678000 >= sum_3 + sum_4); i++) // 반복문 사용, i는 0부터 시작, 3의 배수 총합과 4의 배수 총합의 차이 값과 더한 값에 대한 조건 적용(조건 만족 또는 그 이상일 시 반복문 탈출), 앞의 조건을 만족할때까지 i의 값을 증가시켜 반복
	{
		if(i % 3 == 0) // 첫번째 조건문 사용, i가 3의 배수일때의 케이스
		{
			sum_3 += 3; // = sum_3 + 3, 3의 배수 총합 계산
			count_3++; // 3의 배수 총합 계산 횟수 증가
		}

		else if(i % 4 == 0) // 첫번째 조건문에 반하는 두번째 조건문 사용, i가 4의 배수일때의 케이스
		{
			sum_4 += 4; // = sum_4 + 4, 4의 배수 총합 계산
			count_4++; // 4의 배수 총합 계산 횟수 증가
		}

		count++; // i값 카운트 횟수 증가
	}
}

void B(void) // 두번째 함수 지정, 함수 이름은 'B'
{
	printf("i값 : %d\n", count); // i값 카운트 횟수 출력
	printf("3의 배수 i 카운트 값 : %d\n", count_3); // 3의 배수 총합까지의 계산 횟수 출력
	printf("4의 배수 i 카운트 값 : %d\n", count_4);// 4의 배수 총합까지의 계산 횟수 출력
	printf("sum_3값 : %d\n", sum_3); // 3의 배수 총합 출력
	printf("sum_4값 : %d\n", sum_4); // 4의 배수 총합 출력
	printf("sum값 : %d\n", sum_3 - sum_4); // 3의 배수와 4의 배수 차이 값 출력
	printf("sub값 : %d\n", sum_3 + sum_4); // 3의 배수와 4의 배수 총합 값 출력
}

void C(void) // 세번째 함수 지정, 함수 이름은 'C'
{
	getchar(); // Enter 입력 시 프로그램 종료
}

int main(void) // 함수 시작
{
	A(); // A 함수 호출
	B(); // B 함수 호출
	C(); // C 함수 호출
}
