/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 022 : p_338_8 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 정수형 배열 a 선언, 크기는 10
    int* p = a; // 포인터 p 선언

    printf("*p = %d\n", *p); // 포인터 p가 가리키는 배열 a의 시작 주소의 값 출력

    printf("*p + 2 = %d\n", *p + 2); // 포인터 p가 가리키는 배열 a의 시작 주소의 값에 2를 더하여 출력

    printf("*(p + 5) = %d\n", *(p + 5)); // 포인터 p가 가리키는 배열 a의 시작 주소의 값에 5를 더하여 출력

    return 0; // 프로그램 종료
}
