/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 12 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("���� ���� �̸� : ");
	scanf("%s", file1);
	printf("���� ���� �̸� : ");
	scanf("%s", file2);

	// ù ��° ������ �б� ���� ����.
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	// �� ��° ������ ���� ���� ����.
	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}

	// ù ��° ������ �� ��° ���Ϸ� �����Ѵ�.
	while (fgets(buffer, 100, fp1) != NULL)
	{
		fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
