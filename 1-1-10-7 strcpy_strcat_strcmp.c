/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 7 */

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

	printf("ù��° �ܾ �Է����ּ���. : ");
	scanf("%s", s1);
	printf("�ι�° �ܾ �Է����ּ���. : ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0)
	{
		printf("%s�� %s���� �켱������ �ֽ��ϴ�.\n", s1, s2);
	}
	else if (result == 0)
	{
		printf("%s�� %s�� ���ϼ����� �ֽ��ϴ�.\n", s1, s2);
	}
	else
	{
		printf("%s�� %s���� ���������� �ֽ��ϴ�.\n", s1, s2);
	}

	return 0;
}
