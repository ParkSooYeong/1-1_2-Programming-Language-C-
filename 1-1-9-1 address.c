/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 9 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i = 4;
	char c = 3;
	double f = 4.3;

	printf("정수의 주소 : %u\n", &i); // 변수 i의 주소 출력
	printf("문자의 주소 : %u\n", &c); // 변수 c의 주소 출력
	printf("실수의 주소 : %u\n", &f); // 변수 f의 주소 출력

	return 0;
}
