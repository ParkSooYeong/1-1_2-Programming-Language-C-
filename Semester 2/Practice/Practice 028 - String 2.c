/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 028 : String 2 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char str[] = "A barking dog never bites"; // 문자형 배열 str 선언, 문자열
	int i = 0; // 정수형 변수 i 선언, 초기값은 0

	while (str[i] != 0) // 반복문 while 사용, str[i]에서 i가 0이 되기 전까지 아래 코드 반복
	{
		i++; // i를 1씩 증가
	}

	printf("문자열 %s의 길이는 %d입니다.\n", str, i); // 결과 확인 메시지 출력

	return 0; // 프로그램 종료
}
