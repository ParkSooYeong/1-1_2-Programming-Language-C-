/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 020 : Pointer_Array */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
    int a[] = { 10, 20, 30, 40, 50 }; // 정수형 배열 a 선언

    printf("a = %u\n", a); // 배열 a의 시작 주소 출력

    printf("a + 1 = %u\n", a + 1); // 배열 a의 시작 주소에 int형 크기로 1을 더하여 출력

    printf("*a = %d\n", *a); // 배열 a의 시작 주소가 가리키는 원소 출력

    printf("*(a + 1) = %d\n", *(a + 1)); // 배열 a의 시작 주소가 가리키는 원소의 다음 원소를 출력

    return 0; // 프로그램 종료
}
