/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 3 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	// 변수 선언
	char id[4], pass[5];

	// 입력 안내문
	printf("사용하실 아이디를 3자리의 이니셜로, 패스워드를 4자리의 숫자로 입력해주세요.\n\n");
	printf("ID : ___\b\b\b");
	scanf("%s", id);
	printf("PASSWORD : ____\b\b\b\b");
	scanf("%s", pass);

	printf("\n\a입력된 아이디는 \"%s\"이고 패스워드는 \"%s\"입니다.\n\n", id, pass);
	
	return 0;
}
