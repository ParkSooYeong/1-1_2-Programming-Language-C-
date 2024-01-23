/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 004 */

#include <stdio.h> // 헤더 파일 포함

void sub(int*); // 함수 sub 선언

int main(void) // 정수형 함수 main 시작
{
	int a[6] = { 1, 2, 3, 4, 5, 6 }; // 정수형 배열 a 선언, 크기는 6
	int i; // 정수형 변수 i 선언

	sub(a); // 함수 sub에 배열 a를 대입하여 실행

	for (i = 0; i < 6; i++) // 반복문 for 사용, i는 0부터 시작하여 6이 되기 전까지 1씩 증가
	{
		printf("%d\n", a[i]); // 증가하는 i에 따라서 배열 a의 원소들의 대응되는 값 출력
	}

	return 0; // 프로그램 종료
}

void sub(int* p) // 함수 sub 시작, 포인터 p 선언
{
	p[0] = 0; // 포인터 p가 가리키는 배열 a의 첫번째 원소의 값을 0이라고 지정
}
