/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int compute_sum(int n, int m); // 함수 원형

int main(void)
{
	int n, m, sum;

	printf("시작 정수를 입력해주세요. : ");
	scanf("%d", &n);
	printf("마지막 정수를 입력해주세요. : ");
	scanf("%d", &m);

	sum = compute_sum(n, m); // 함수 사용

	printf("\n%d부터 %d까지의 합은 %d입니다.\n\n", n, m, sum);

	return 0;
}

int compute_sum(int n, int m) // 함수 정의
{
	int i;
	int result = 0;

	for (i = n; i <= m; i++)
	{
		result += i;
	}

	return result;
}
