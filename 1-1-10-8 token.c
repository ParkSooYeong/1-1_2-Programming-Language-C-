/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 8 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <string.h>

char s[] = "Manners, Maketh, Man.";
char seps[] = " ,\t\n"; // �и��� : �����̽�,��ǥ,��,�ٹٲ� ����
char* token;

int main(void)
{
	token = strtok(s, seps); // ���ڿ����� ù ��° ��ū�� ��´�.

	while (token != NULL)
	{
		printf("token : %s\n", token); // ���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�.
		
		token = strtok(NULL, seps); // ���� ��ū�� ��´�.
	}

	return 0;
}
