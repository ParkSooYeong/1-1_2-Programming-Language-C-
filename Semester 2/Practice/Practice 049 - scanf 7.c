/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 049 : scanf 7 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char s[80]; // 문자형 배열 s 선언, 크기는 80
	char t[80]; // 문자형 배열 t 선언, 크기는 80

	printf("문자열을 입력하시오 : \n"); // 문자열 입력 지시 메시지 출력
	scanf("%[abc]", s); // a, b, c로 이루어진 문자열만 받음
	scanf("%[^abc]", t); // a, b, c 이외로 이루어진 문자열만 받음

	printf("입력된 문자열 = %s\n", s); // a, b, c로 이루어진 문자열 출력
	printf("입력된 문자열 = %s\n", t); // a, b, c 이외로 이루어진 문자열 출력

	return 0; // 프로그램 종료
}
