/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 13 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	double mile, km;

	for (i = 0; i < argc; i++)
	{
		printf("��ɾ� ���ο��� %d��° ���ڿ� = %s\n", i, argv[i]);
	}

	printf("\n");

	if (argc != 2)
	{
		printf("��� ��� : milekm �Ÿ�\n");

		return 1;
	}

	mile = atof(argv[1]);
	km = 1.609 * mile;
	printf("�Էµ� �Ÿ� = %f km\n", km);

	return 0;
}
