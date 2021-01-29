/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 10 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[80];
	char s1[80];
	char s2[80];
	int result;

	strcpy(string, "Hello world from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");

	printf("string = %s\n", string);

	printf("\n");

	printf("첫번째 단어를 입력해주세요. : ");
	scanf("%s", s1);
	printf("두번째 단어를 입력해주세요. : ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0)
	{
		printf("%s가 %s보다 우선순위에 있습니다.\n", s1, s2);
	}
	else if (result == 0)
	{
		printf("%s가 %s와 동일순위에 있습니다.\n", s1, s2);
	}
	else
	{
		printf("%s가 %s보다 낮은순위에 있습니다.\n", s1, s2);
	}

	return 0;
}
