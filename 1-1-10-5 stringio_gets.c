/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	char name[100];
	char city[100];

	printf("�̸��� �Է����ּ���. : ");
	scanf("%s", name);
	printf("���ø� �Է����ּ���. : ");
	scanf("%s", city);

	printf("�̸� : %s , ���� : %s\n\n", name, city);

	printf("�̸��� ���ø� �Է����ּ���. : ");
	gets(name);
	gets(city);

	puts(name);
	puts(city);

	return 0;
}
