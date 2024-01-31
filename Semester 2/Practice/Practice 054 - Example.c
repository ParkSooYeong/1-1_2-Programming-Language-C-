/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 054 : Example */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int i = 23; // 정수형 변수 i 선언, 초기값 23
	float f = 1.2345; // 실수형 변수 f 선언, 초기값 1.2345
	FILE* fp; // 파일 모드 포인터 fp 선언

	fp = fopen("sample.txt", "w"); // sample.txt 파일 쓰기 모드로 오픈

	if (fp != NULL) // 조건문 if 사용, 파일이 열린다면 아래 코드 실행
	{
		fprintf(fp, "12345678901234567890123456\n"); // 파일에 메시지 작성
		fprintf(fp, "%10d %16.3f", i, f); // 파일에 메시지 작성, 간격 정렬
	}

	fclose(fp); // 파일 닫음

	return 0; // 프로그램 종료
}
