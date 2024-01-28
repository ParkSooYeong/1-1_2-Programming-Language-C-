/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 042 : Pointer_to_Struct */

// 포인터를 통한 구조체 참조
#include <stdio.h> // 헤더 파일 포함

struct student // 구조체 student 정의
{
	int number; // 정수형 변수 멤버 number 정의
	char name[20]; // 문자형 배열 멤버 name 정의, 크기는 20
	double grade; // 실수형 변수 멤버 grade 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct student s = { 20170910, "박수영", 4.5 }; // 구조체 student 변수 s 선언
	struct student* p; // 구조체 포인터 p 선언

	p = &s; // 포인터 p는 s를 가리킴

	printf("학번 = %d , 이름 = %s , 학점 = %f \n", s.number, s.name, s.grade); // 구조체로 메시지 출력
	printf("학번 = %d , 이름 = %s , 학점 = %f \n", (*p).number, (*p).name, (*p).grade); // 구조체 포인터로 메시지 출력
	printf("학번 = %d , 이름 = %s , 학점 = %f \n", p->number, p->name, p->grade); // 간접 멤버 연산자로 메시지 출력

	return 0; // 프로그램 종료
}
