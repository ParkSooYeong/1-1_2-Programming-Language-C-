/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 037 : Student 1 */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

struct student // 구조체 student 정의
{
	int number; // 정수형 멤버 변수 number 정의
	char name[10]; // 문자형 멤버 배열 name 정의, 크기는 10
	double grade; // 실수형 멤버 변수 grade 정의
};

int main(void) //정수형 함수 main 시작
{
	struct student s; // 구조체 student 변수 s 선언

	s.number = 20170910; // s의 멤버 number 참조
	strcpy(s.name, "박수영"); // s의 멤버 name 참조
	s.grade = 4.5; // s의 멤버 grade 참조

	printf("학번 : %d\n", s.number); // 학번 출력
	printf("이름 : %s\n", s.name); // 이름 출력
	printf("학점 : %f\n", s.grade); // 학점 출력

	return 0; // 프로그램 종료
}
