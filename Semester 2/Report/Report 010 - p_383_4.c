/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Report 010 : p_383_4 */

#include <stdio.h> // 헤더 파일 포함

int str_chr(char* s, int c); // 정수형 전역 변수 str_chr 예비 선언, 문자형 포인터 s와 정수형 변수 c 참조

int main(void) // 정수형 함수 main 시작
{
	char arr[100], ch; // 문자형 배열 arr 선언, 크기는 100, 문자형 변수 ch 선언
	int i; // 정수형 변수 i 선언

	printf("문자열을 입력하시오 : "); // 문자열 입력 지시 메시지 출력
	gets(arr); // 문자열을 입력받아서 arr에 저장

	for (ch = 'a'; ch <= 'z'; ch++) // 반복문 for 사용, ch는 문자 a 부터 시작하여 z가 될때까지 1씩 증가(반복)
	{
		printf("%c : %d\n", ch, str_chr(arr, ch)); // 알파벳과 입력받은 문자열에 포함된 알파벳의 갯수 출력
	}

	return 0; // 프로그램 종료
}

int str_chr(char* s, int c) // 정수형 함수 str_chr 시작, 문자형 포인터 s와 정수형 변수 c 참조
{
	int i, cnt = 0; // 정수형 변수 i, cnt 선언, cnt는 초기값을 0이라고 지정

	for (i = 0; s[i] != '\0'; i++) // 반복문 for 사용, i는 0부터 시작하여 포인터 s의 원소 i가 NULL 문자를 만나기 전까지 1씩 증가(반복)
	{
		if (s[i] == c) // 조건문 if 사용, 포인터 s의 변화하는 원소 i가 c가 되었을 경우에 아래 코드 실행
		{
			cnt++; // cnt를 1 증가(= cnt + 1)
		}
	}

	return cnt; // cnt 값을 반환
}
