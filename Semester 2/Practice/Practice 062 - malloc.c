/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 062 : malloc */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

struct Book // 구조체 Book 정의
{
	int number; // 정수형 변수 멤버 number 정의
	char title[15]; // 문자형 배열 멤버 title 정의, 크기는 15
};

int main(void) // 정수형 함수 main 시작
{
	struct Book* p; // 구조체 Book 변수 포인터 *p 선언

	p = (struct Book*)malloc(2 * sizeof(struct Book)); // 동적 메모리 할당

	if (p == NULL) // 조건문 if 사용, p가 NULL 값이면 아래 코드 실행
	{
		printf("메모리 할당 오류\n"); // 메모리 할당 오류 메시지 출력

		exit(1); // 프로그램 종료
	}

	p->number = 1; // p 값 부여
	strcpy(p->title, "C Programming"); // p 문자열 부여

	(p + 1)->number = 2; // (p+1) 값 부여
	strcpy((p + 1)->title, "Data Structure"); // (p+1) 문자열 부여

	printf("%d %s\n", p->number, p->title); // p 메시지 출력
	printf("%d %s\n", (p + 1)->number, (p + 1)->title); // (p+1) 메시지 출력

	free(p); // 동적 메모리 반납

	return 0; // 프로그램 종료
}
