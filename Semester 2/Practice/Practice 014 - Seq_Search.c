/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 014 : Seq_Search */

#include <stdio.h> // 헤더 파일 포함

#define SIZE 10 // SIZE를 10이라고 정의

int main(void) // 정수형 함수 main 시작
{
	int key, i; // 정수형 변수 key, i 선언
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // 정수형 배열 list 선언, 크기는 SIZE로 지정

	printf("탐색할 값을 입력하세요 : "); // 탐색할 값 입력 지시 메시지 출력
	scanf("%d", &key); // 값을 입력받아서 key에 저장

	for (i = 0; i < SIZE; i++) // 반복문 for 사용, i는 0부터 시작, SIZE가 되기 전까지, 1씩 증가
	{
		if (list[i] == key) // 조건문 if 사용, 입력받은 탐색할 값을 배열 list에 찾았을 때,
		{
			printf("탐색 성공 인덱스 = %d\n", i); // 탐색 성공 메시지 출력
		}
	}

	printf("탐색 종료\n"); // 탐색 종료 메시지 출력

	return 0; // 프로그램 종료
}
