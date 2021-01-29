/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 8 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <string.h>

char s[] = "Manners, Maketh, Man.";
char seps[] = " ,\t\n"; // 분리자 : 스페이스,쉼표,탭,줄바꿈 문자
char* token;

int main(void)
{
	token = strtok(s, seps); // 문자열에서 첫 번째 토큰을 얻는다.

	while (token != NULL)
	{
		printf("token : %s\n", token); // 문자열 s에 토큰이 있는 동안 반복한다.
		
		token = strtok(NULL, seps); // 다음 토큰을 얻는다.
	}

	return 0;
}
