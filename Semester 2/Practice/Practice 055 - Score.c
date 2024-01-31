/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 055 : Score */

#include <stdio.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	FILE* fp; // 파일 모드 포인터 fp 선언
	char fname[100]; // 문자형 배열 fname 선언, 크기는 100
	int number, count = 0; // 정수형 변수 number, count 선언, 초기값 0
	char name[20]; // 문자형 배열 name 선언, 크기는 20
	float score, total = 0.0; // 실수형 변수 score, total 선언, 초기값 0.0

	printf("성적 파일 이름을 입력하세요. : "); // 파일 이름 입력 지시 메시지 출력
	scanf("%s", fname); // 파일 이름 입력받아서 fname에 저장

	// 성적 파일을 쓰기 모드로 연다.
	if ((fp = fopen(fname, "w")) == NULL) // 조건문 if 사용, 파일을 쓰기 모드로 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	// 사용자로부터 학번, 이름, 성적을 입력받아서 파일에 저장한다.
	while (1) // 반복문 while 사용, 특정 행위를 하기 전까지는 무한 반복
	{
		printf("학번, 이름, 성적을 입력하세요. : (음수이면 종료) "); // 정보 입력 지시 메시지 출력
		scanf("%d", &number); // 정보들을 입력받아서 number에 저장

		if (number < 0) // 조건문 if 사용, 입력받은 정보가 음수일 시 아래 코드 실행
		{
			break; // 반복문 탈출
		}

		scanf("%s %f", name, &score); // 정보들을 입력받아 각각의 변수 및 배열에 저장

		fprintf(fp, "%d %s %f\n", number, name, score); // 파일에 정수, 문자열, 실수 형태로 데이터를 쓴다.
	}

	fclose(fp); // 파일 닫음

	// 성적 파일을 읽기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL) // 조건문 if 사용, 파일을 읽기 모드로 열 수 없을 시 아래 코드 실행
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname); // 파일 열기 불가능 메시지 출력

		exit(1); // 탈출
	}

	while (!feof(fp)) // 반복문 while 사용, 파일의 끝이 아니라면 아래 코드 무한 반복
	{
		fscanf(fp, "%d %s %f", &number, name, &score); // 파일에 정수, 문자열, 실수 형태로 데이터를 읽는다.

		total += score; // = total + score
		count++; // = count + 1
	}

	printf("평균 = %f\n", total / count); // 평균 메시지 출력

	fclose(fp); // 파일 닫음

	return 0; // 프로그램 종료
}
