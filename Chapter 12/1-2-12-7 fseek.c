/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 12 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

void init_table(int table[], int size);

int main(void)
{
	int table[SIZE];
	int n, data;
	long pos;
	FILE *fp = NULL;

	// 배열 초기화
	init_table(table, SIZE);

	// 이진 파일을 쓰기 모드로 연다.
	if ((fp = fopen("sample.dat", "wb")) == NULL)
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 배열을 이진 모드로 파일에 저장한다.
	fwrite(table, sizeof(int), SIZE, fp);
	fclose(fp);

	if ((fp = fopen("sample.dat", "rb")) == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 사용자가 선택한 위치의 정수를 파일로부터 읽는다.
	while (1)
	{
		printf("파일에서의 위치를 입력해주세요.(0 ~ %d , 종료 = -1) : ", SIZE - 1);
		scanf("%d", &n);

		if (n == -1)
		{
			break;
		}

		pos = (long) n * sizeof(int);

		fseek(fp, pos, SEEK_SET);
		fread(&data, sizeof(int), 1, fp);

		printf("%d 위치의 값은 %d입니다.\n", n, data);
	}

	fclose(fp);

	return 0;
}

// 배열을 인덱스의 제곱으로 채운다.
void init_table(int table[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		table[i] = i * i;
	}
}
