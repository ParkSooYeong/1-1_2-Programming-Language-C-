/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 9 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i = 4;
	char c = 3;
	double f = 4.3;

	printf("������ �ּ� : %u\n", &i); // ���� i�� �ּ� ���
	printf("������ �ּ� : %u\n", &c); // ���� c�� �ּ� ���
	printf("�Ǽ��� �ּ� : %u\n", &f); // ���� f�� �ּ� ���

	return 0;
}
