/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	int i = 1;
	int j;

	printf("전개할 숫자를 입력해주세요. : ");
	scanf("%d", &j);

loop:
	printf("%d * %d = %d \n", j, i, j * i);
	i++;
	if (i == 10)
	{
		goto end;
	}
	goto loop;

end:
	return 0;
}
