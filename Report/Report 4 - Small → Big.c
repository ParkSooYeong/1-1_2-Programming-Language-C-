/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Report 4 : Small → Big */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // 헤더 파일 포함

void change() // 함수 지정, 함수 이름은 'change'
{
	char ch; // 문자형 변수 'ch' 선언

	while(1) // 반복문 사용
	{
		printf("Write Small Character : "); // 원하는 소문자 입력 지시 메시지 출력
		scanf(" %c", &ch); // 공백 문자 제외 및 입력 받은 소문자를 문자형 변수 ch에 저장

		if(ch == 'Q') // 조건문 사용, ch에 Q가 저장될 시(프로그램 사용자가 Q를 입력 시) ↓
		{
			printf("Bye\n\n");

			break; // 반복문 탈출
		}
		if(ch < 'a' || ch > 'z') // 조건문 사용, ch에 a~z가 저장될 시(프로그램 사용자가 a부터 z까지를 입력 시) ↓
		{
			continue; // 반복문 반복
		}

		ch -= 32; // = ch - 32와 같음, 소문자를 대문자로 변환

		printf("Changed Big Character is %c.\n\n", ch); // 문자형 변수 ch에 저장된 대문자를 메시지와 함께 출력
	}
}

int main(void) // 함수 시작
{
	change(); // change 함수 호출

	return 0; // 프로그램 종료
}
