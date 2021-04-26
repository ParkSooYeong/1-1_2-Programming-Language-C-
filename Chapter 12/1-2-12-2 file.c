/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 12 , Number 2 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	int c;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
	{
		printf("file open failed\n");
	}
	else
	{
		printf("file open success\n");
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);

	fclose(fp);

	fp = fopen("sample.txt", "r");

	while ((c = getc(fp)) != EOF)
	{
		putchar(c);
	}

	printf("\n");

	fclose(fp);

	return 0;
}
