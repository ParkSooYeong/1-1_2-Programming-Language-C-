/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 012 */

#include <stdio.h> // 헤더 파일 포함

enum jobs { student, worker, freeworker, republicman, etc }; // 열거형 jobs 정의

int main(void) // 정수형 함수 main 시작
{
	enum jobs j; // 열거형 jobs 변수 j 선언

	printf("당신의 직업을 입력하세요\n(0=학생, 1=직장인, 2=자영업, 3=공무원, 4=기타) : "); // 직업 코드 입력 지시 메시지 출력
	scanf("%d", &j); // 직업 코드를 입력받아서 열거형 변수 j에 저장

	switch (j) // 조건문 switch 사용, j의 경우에 따라서 아래의 맞는 코드 실행
	{
		case student: // 입력받은 직업이 0일 경우
			printf("당신의 직업은 학생입니다.\n"); // 학생 직업 메시지 출력
			break; // 조건문 탈출
		case worker: // 입력받은 직업이 1일 경우
			printf("당신의 직업은 직장인입니다.\n"); // 직장인 직업 메시지 출력
			break; // 조건문 탈출
		case freeworker: // 입력받은 직업이 2일 경우
			printf("당신의 직업은 자영업입니다.\n"); // 자영업 직업 메시지 출력
			break; // 조건문 탈출
		case republicman: // 입력받은 직업이 3일 경우
			printf("당신의 직업은 공무원입니다.\n"); // 공무원 직업 메시지 출력
			break; // 조건문 탈출
		case etc: // 입력받은 직업이 4일 경우
			printf("당신의 직업은 기타입니다.\n"); // 기타 직업 메시지 출력
			break; // 조건문 탈출
	}

	return 0; // 프로그램 종료
}
