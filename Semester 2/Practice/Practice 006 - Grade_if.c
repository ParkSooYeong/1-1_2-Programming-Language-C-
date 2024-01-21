/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 006 : Grade_if */

#include <stdio.h> //헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int a; // 정수형 변수 a 선언

	printf("프로그래밍 언어 점수를 입력하세요 : "); // 점수 입력 지시 메시지 출력
	scanf("%d", &a); // 점수를 입력받아 정수형 변수 a에 저장

	if (a <= 100 && a >= 90) // 조건문 if문 사용, 입력받은 점수가 100점 이하 90점 이상일 때,
	{
		printf("학점 : A\n"); // 메시지 출력
	}
	else if (a >= 80) // 입력받은 점수가 90점 미만 80점 이상일 때,
	{
		printf("학점 : B\n"); // 메시지 출력
	}
	else  if (a >= 70) // 입력받은 점수가 80점 미만 70점 이상일 때,
	{
		printf("학점 : C\n"); // 메시지 출력
	}
	else  if (a >= 60) // 입력받은 점수가 70점 미만 60점 이상일 때,
	{
		printf("학점 : D\n"); // 메시지 출력
	}
	else // 입력받은 점수가 60점 미만 0점 이상일 때,
	{
		printf("학점 : F\n"); // 메시지 출력
	}

	return 0; // 프로그램 종료
}
