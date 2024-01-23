/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 3 */

#include <stdio.h> // 헤더 파일 포함

void sub(int*); // 함수 sub 선언

int main(void) // 정수형 함수 main 시작
{
    int a[10] = { 1, 2, 3, 4, 5, 6 }; // 정수형 배열 a 선언, 크기는 10

    sub(a); // 함수 sub에 배열 a를 대입하여 실행

    return 0; // 프로그램 종료
}

void sub(int* p) // 함수 sub 시작, 포인터 p 선언
{
    printf("%d\n", *p); // 포인터 p가 가리키는 배열 a의 시작 주소의 값 출력
    printf("%d\n", p[2]); // 포인터 p가 가리키는 배열 a의 세번째 원소의 값 출력
}
