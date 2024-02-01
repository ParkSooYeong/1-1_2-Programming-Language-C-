/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Report 012 : p_473_2 */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

char fn1[256], fn2[256]; // 문자형 전역 배열 fn1,2 정의, 크기는 모두 256

int main(void) // 정수형 함수 main 시작
{
	FILE* f1, * f2; // 파일형 포인터 f1,2 선언
	int ch; // 정수형 변수 ch 선언

	printf("첫번째 파일 이름 : "); // 첫번째 파일 이름 입력 지시 메시지 출력
	gets_s(fn1); // 첫번째 파일 이름 입력받아서 fn1에 저장
	printf("두번째 파일 이름 : "); // 두번째 파일 이름 입력 지시 메시지 출력
	gets_s(fn2); // 두번째 파일 이름 입력받아서 fn2에 저장

	if ((f1 = fopen(fn1, "ab")) == NULL || (f2 = fopen(fn2, "rb")) == NULL) // 조건문 if 사용, 파일이 존재하지 않을 시 아래 코드 실행
	{
		fprintf(stderr, "파일을 열 수 없습니다."); // 파일 오픈 불가 메시지 출력

		exit(1); // 조건문 탈출 및 프로그램 종료
	}

	while (1) // 반복문 while 사용, 특정 지시 없을 시 아래 코드 무한 반복
	{
		ch = fgetc(f2); // ch에 f2 내용 저장

		if (ch == EOF) // 조건문 if 사용, ch에 'Ctrl + Z'가 입력된 것을 확인할 시 아래 코드 실행 
		{
			break; // 반복문 탈출
		}

		fputc(ch, f1); // ch의 내용을 f1에 저장
	}

	fclose(f1); // f1 파일 닫음
	fclose(f2); // f2 파일 닫음

	printf("%s에 %s가 추가되었습니다.\n", fn1, fn2); // 파일 추가 완료 메시지 출력

	return 0; // 프로그램 종료
}
