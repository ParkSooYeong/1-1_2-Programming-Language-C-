/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 8 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("Ž���� ���� �Է����ּ���.(1~9) : ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("Ž�� ���� �ε��� : %d\n", i);
		}
	}

	printf("Ž�� ����\n");

	return 0;
}
