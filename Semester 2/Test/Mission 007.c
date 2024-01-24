/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 007 */

#include <stdio.h> // 헤더 파일 포함
#include <ctype.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
    char c; // 문자형 변수 c 선언

    printf("문자를 입력하세요. : "); // 문자 입력 지시 메시지 출력

    c = getche(); // 문자를 입력받고 에코를 사용(버퍼는 사용하지 않음)

    printf("\n아스키 코드 = %d\n", c); // 아스키 코드 변환값 메시지 출력

    return 0; // 프로그램 종료
}
