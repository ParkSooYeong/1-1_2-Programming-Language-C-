/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 038 : Student 2 */

#include <stdio.h> // 헤더 파일 포함

struct student // 구조체 student 정의
{
	int number; // 정수형 멤버 변수 number 정의
	char name[10]; // 문자형 멤버 배열 name 정의, 크기는 10
	double grade; // 실수형 멤버 변수 grade 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct student s; // 구조체 student 변수 s 선언

	printf("학번을 입력하시오 : "); // 학번 입력 지시 메시지 출력
	scanf("%d", &s.number); // 학번 입력받아서 s의 멤버 number에 저장

	printf("이름을 입력하시오 : "); // 이름 입력 지시 메시지 출력
	scanf("%s", s.name); // 이름 입력받아서 s의 멤버 name에 저장(배열이므로 & 생략)

	printf("학점을 입력하시오 : "); // 학점 입력 지시 메시지 출력
	scanf("%lf", &s.grade); // 학점 입력받아서 s의 멤버 grade에 저장

	printf("\n");

	printf("학번 : %d\n", s.number); // 학번 출력
	printf("이름 : %s\n", s.name); // 이름 출력
	printf("학점 : %f\n", s.grade); // 학점 출력

	return 0; // 프로그램 종료
}
