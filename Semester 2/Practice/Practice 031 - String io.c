/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 031 : String io */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char name[100]; // 문자형 배열 name 선언, 크기는 100
	char address[100]; // 문자형 배열 address 선언, 크기는 100

	printf("이름을 입력하시오 : "); // 이름 입력 지시 메시지 출력
	scanf("%s", name); // 이름을 입력받아서 문자열 name에 저장(배열의 이름이 배열의 주소이므로 &name과 같이 하면 안 된다.)
	printf("현재 거주하는 도시를 입력하시오 : "); // 도시 입력 지시 메시지 출력
	scanf("%s", address); // 도시를 입력받아서 문자열 address에 저장

	printf("당신은 %s에 사는 %s입니다.\n", address, name); // 결과 메시지 출력

	return 0; // 프로그램 종료
}
