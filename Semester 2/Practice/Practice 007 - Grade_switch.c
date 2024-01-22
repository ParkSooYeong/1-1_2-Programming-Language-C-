/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 007 : Grade_switch */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int a; // 정수형 변수 a 선언

	printf("프로그래밍 언어 점수를 입력하세요 : "); // 점수 입력 지시 메시지 출력
	scanf("%d", &a); // 점수를 입력받아 정수형 변수 a에 저장

	switch (a / 10) // 조건문 switch문 사용, a에 저장된 점수에 대하여 10으로 나눈 후, 아래 케이스들에 맞추어서 실행
	{
		case 10: // 몫이 10일때, 
			printf("학점 : A\n"); // 메시지 출력
			break; // 조건문 switch문 탈출

		case 9: // 몫이 9일때,
			printf("학점 : A\n"); // 메시지 출력
			break; // 조건문 switch문 탈출

		case 8: // 몫이 8일때,
			printf("학점 : B\n"); // 메시지 출력
			break; // 조건문 switch문 탈출

		case 7: // 몫이 7일때,
			printf("학점 : C\n"); // 메시지 출력
			break; // 조건문 switch문 탈출

		case 6: // 몫이 6일때,
			printf("학점 : D\n"); // 메시지 출력
			break; // 조건문 switch문 탈출

		default: // 몫이 위의 케이스를 제외한 경우일때, (몫이 5~1일때,)
			printf("학점 : F\n"); // 메시지 출력
			break; // 조건문 switch문 탈출
	}

	return 0; // 프로그램 종료
}
