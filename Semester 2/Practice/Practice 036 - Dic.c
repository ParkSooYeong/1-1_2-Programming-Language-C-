/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 036 : Dic */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

#define WORDS 5 // WORDS를 5라고 정의

int main(void) // 정수형 함수 main 시작
{
	int i, index; // 정수형 변수 i, index 선언
	char dic[WORDS][2][30] = // 문자형 3차원 배열 dic 선언, 각각 단어의 개수, 0이면 영어, 1이면 한글, 문자열의 최대 길이
	{
		{"book", "책"}, // 문자열 지정
		{"boy", "소년"}, // 문자열 지정
		{"computer", "컴퓨터"}, // 문자열 지정
		{"lanuguage", "언어"}, // 문자열 지정
		{"rain", "비"}, // 문자열 지정
	};
	char word[30]; // 문자형 배열 word 선언, 크기는 30

	printf("단어를 입력하시오 : "); // 단어 입력 지시 메시지 출력
	scanf("%s", word); // 단어를 입력받아 word에 저장

	index = 0; // index의 초기값 지정

	for (i = 0; i < WORDS; i++) // 반복문 for 사용, i는 0부터 시작하여 WORDS가 되기 전까지 1씩 증가
	{
		if (strcmp(dic[index][0], word) == 0) // 조건문 if 사용, 문자열을 비교하여 일치하는 문자열이 발견되면 아래 코드 실행
		{
			printf("%s : %s\n", word, dic[index][1]); // 입력한 문자열과 일치하는 문자열 출력

			return 0; // 프로그램 종료
		}

		index++; // = index + 1
	}

	printf("사전에서 발견되지 않았습니다.\n"); // 미발견 메시지 출력

	return 0; // 프로그램 종료
}
