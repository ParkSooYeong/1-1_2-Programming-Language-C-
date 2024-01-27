/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 041 : Array_of_Struct */

#include <stdio.h> // 헤더 파일 포함

#define SIZE 3 // SIZE를 3이라고 정의

struct student // 구조체 student 정의
{
	int number; // 정수형 멤버 변수 number 정의
	char name[20]; // 문자형 멤버 배열 name 정의, 크기는 20
	double grade; // 실수형 멤버 변수 grade 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct student list[SIZE]; // 구조체 student 배열 list 선언
	int i; // 정수형 변수 i 선언

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작하여 SIZE가 되기 전까지 1씩 증가
	{
		printf("학번을 입력하시오 : "); // 학번 입력 지시 메시지 출력
		scanf("%d", &list[i].number); // 입력받은 학번을 구조체 배열 list의 멤버 number에 저장
		printf("이름을 입력하시오 : "); // 이름 입력 지시 메시지 출력
		scanf("%s", list[i].name); // 입력받은 이름을 구조체 배열 list의 멤버 name에 저장(멤버 name은 배열이므로 & 생략)
		printf("학점을 입력하시오(실수) : "); // 학점 입력 지시 메시지 출력
		scanf("%lf", &list[i].grade); // 입력받은 학점을 구조체 배열 list의 멤버 grade에 저장
	}

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작하여 SIZE가 되기 전까지 1씩 증가
	{
		printf("학번 : %d , 이름 : %s , 학점 : %f\n", list[i].number, list[i].name, list[i].grade); // 학번, 이름, 학점 출력
	}

	return 0; // 프로그램 종료
}
