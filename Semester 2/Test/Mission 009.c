/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 009 */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char input[80]; // 문자형 배열 input 선언, 크기는 80
	char find[80]; // 문자형 배열 find 선언, 크기는 80
	char change[80]; // 문자형 배열 change 선언, 크기는 80
	char* found, * tail, * head; // 문자형 포인터 found, tail, head 선언
	int index = 0; // 정수형 변수 index 선언, 초기값은 0

	printf("문자열을 입력하세요 : "); // 문자열 입력 지시 메시지 출력
	gets(input); // input에 저장
	printf("찾을 문자열 : "); // 찾을 문자열 입력 지시 메시지 출력
	gets(find); // find에 저장
	printf("바꿀 문자열 : "); // 바꿀 문자열 입력 지시 메시지 출력
	gets(change); // change에 저장

	found = strstr(input, find); // find에 저장되어있는 문자열을 input에서 문자열 탐색

	if (found == 0) // 조건문 if 사용, 문자열을 찾지 못할시, 아래 코드 실행
	{
		printf("찾을 문자가 없습니다.\n"); // 문자열 미발견 메시지 출력
	}
	else // 조건문 else-if 사용, 위의 if문이 아닐시, 아래 코드 실행
	{
		head = input; // 입력받은 문자열을 head에 저장

		index = strlen(input) - strlen(found); // 입력받은 문자열에서 찾을 문자열을 삭제

		head[index] = '\0'; // NULL 문자 포함

		tail = input + (strlen(input) - (strlen(found) - strlen(find))); // 입력받은 문자열에서 찾을 문자열을 삭제하고 바꿀 문자열을 삽입

		printf("%s", head); // 결과 문자열에서 머리 부분 메시지 출력
		printf("%s", change); // 결과 문자열에서 바꿔진 부분 메시지 출력
		printf("%s\n", tail); // 결과 문자열에서 꼬리 부분 메시지 출력

		return 0; // 프로그램 종료
	}
}
