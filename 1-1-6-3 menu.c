/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int i = 0;

	printf("���Ͻô� �޴��� �������ּ���.\n\n");

	do
	{
		printf("1. File Open\n");
		printf("2. File Close\n\n");
		printf("�޴� ���� : ");
		scanf("%d", &i);
	}
	while(i < 1 || i > 2);

	printf("\n���� �޴� : %d\n\n", i);

	return 0;
}
