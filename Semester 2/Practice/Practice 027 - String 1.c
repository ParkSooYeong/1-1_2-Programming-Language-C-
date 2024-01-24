/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 027 : string 1 */

#include <stdio.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
    char str1[6] = "Seoul"; // 문자 배열의 초기화 방법 1
    char str2[3] = { 'i', 's', '\0' }; // 문자 배열의 초기화 방법 2
    char str3[] = "the capital city of Korea."; // 문자 배열의 초기화 방법 3

    printf("%s %s %s\n", str1, str2, str3); // 메시지 출력
}
