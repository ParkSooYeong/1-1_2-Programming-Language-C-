/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 14 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
	int number;
	char title[15];
};

int main(void)
{
	int *pi; // 동적 메모리를 가리키는 포인터
	char *pc = NULL;
	char *pe = NULL;
	int i = 0;
	int *pa;
	struct Book *p;

	pi = (int *)malloc(sizeof(int)); // 동적 메모리 할당
	pc = (char *)malloc(sizeof(char));
	pe = (char *)malloc(100 * sizeof(char));
	pa = (int *)malloc(5 * sizeof(int));
	p = (struct Book *)malloc(2 * sizeof(struct Book));

	if (pi == NULL) // 반환값이 NULL인지 검사
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	if (pc == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	if (pe == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	if (pa == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	if (p == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	*pi = 100; // 동적 메모리 사용
	printf("*pi = %d\n", *pi); // 동적 메모리 반납

	printf("\n");

	*pc = 'm';
	printf("*pc = %c\n", *pc);
	free(pc);

	printf("\n");

	for (i = 0; i < 26; i++)
	{
		*(pe + i) = 'a' + i; // 알파벳 소문자를 순서대로 대입
	}

	*(pe + i) = 0; // NULL 문자 추가
	printf("*pe = %s\n", pe);
	free(pe);

	printf("\n");

	pa[0] = 100; // *(pa+0) = 100;
	pa[1] = 200; // *(pa+1) = 200;
	pa[2] = 300; // *(pa+2) = 300;
	pa[3] = 400; // *(pa+3) = 400;
	pa[4] = 500; // *(pa+4) = 500;

	for (i = 0; i < 5; i++)
	{
		printf("*pa[%d] = %d\n", i, pa[i]);
	}
	
	free(pa);

	printf("\n");

	p->number = 1;
	strcpy(p->title, "C Programming");

	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data Structure");

	for (i = 0; i < 2; i++)
	{
		printf("%d : %s\n", (p + i)->number, (p + i)->title);
	}

	free(p);

	return 0;
}
