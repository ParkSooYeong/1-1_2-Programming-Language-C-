/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 11 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

#define SIZE 3

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է����ּ���. : ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է����ּ���. : ");
		scanf("%s", &list[i].name);
		printf("������ �Է����ּ���. : ");
		scanf("%lf", &list[i].grade);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("�й� : %d , �̸� : %s , ���� : %f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}
