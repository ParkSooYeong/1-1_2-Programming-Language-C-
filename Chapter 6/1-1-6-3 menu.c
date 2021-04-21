/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i = 0;

	printf("원하시는 메뉴를 선택해주세요.\n\n");

	do
	{
		printf("1. File Open\n");
		printf("2. File Close\n\n");
		printf("메뉴 선택 : ");
		scanf("%d", &i);
	}
	while(i < 1 || i > 2);

	printf("\n선택 메뉴 : %d\n\n", i);

	return 0;
}
