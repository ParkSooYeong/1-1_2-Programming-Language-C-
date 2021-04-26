/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 12 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

#define SIZE 5

int main(void)
{
	int buffer[SIZE];
	FILE *fp = NULL;
	int i;

	fp = fopen("binary.bin", "rb");

	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin ÆÄÀÏÀ» ¿­ ¼ö ¾ø½À´Ï´Ù.");

		return 1;
	}

	for (i = 0; i < SIZE; i++)
	{
		fread(&buffer[i], sizeof(int), 1, fp);
		printf("%d ", buffer[i]);
	}

	return 0;
}
