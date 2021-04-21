/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int x, y;
	int a, b;

	printf("가로 길이를 설정해주세요. : ");
	scanf("%d", &a);
	printf("세로 길이를 설정해주세요. : ");
	scanf("%d", &b);

	for (y = 0; y < b; y++)		// 외부 반복문
	{
		for (x = 0; x < a; x++)	// 내부 반복문
		{
			printf("*");
		}

		printf("\n");			// 내부 반복문이 종료될 때마다 실행
	}

	return 0;
}
