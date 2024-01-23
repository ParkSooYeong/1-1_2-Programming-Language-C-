/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 2 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	int a[10] = { 1, 2, 3, 4, 5, 6 }; // 정수형 배열 a 선언, 크기는 10
	int* p = a; // 포인터 p를 a에 대하여 선언
	int* q = a + 3; // 포인터 q를 a + 3에 대하여 선언

	printf("%d\n", *(a + 1)); // 배열 a의 첫 원소의 값에 1을 더하여 출력
	printf("%d\n", *(p + 2)); // 포인터 p가 가리키는 배열 a의 시작 주소에서 2를 더하여 출력
	printf("%d\n", *(q + 1)); // 포인터 q가 가리키는 배열 a의 시작 주소에서 3 + 1을 하여 출력

	return 0; // 프로그램 종료
}
