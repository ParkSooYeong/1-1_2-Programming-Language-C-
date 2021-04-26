/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 12 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	printf("%6d     %6d\n", 1, -1);
	printf("%6d     %6d\n", 12, -12);
	printf("%6d     %6d\n", 123, -123);
	printf("%-6d     %-6d\n", 1, -1);
	printf("%-6d     %-6d\n", 12, -12);
	printf("%-6d     %-6d\n", 123, -123);

	printf("\n");

	printf("%10.3f\n", 1.23456789);
	printf("%10.4f\n", 1.23456789);
	printf("%10.5f\n", 1.23456789);
	printf("%.3f\n", 1.23456789);
	printf("%.4f\n", 1.23456789);
	printf("%.5f\n", 1.23456789);

	printf("\n");

	printf("10진법 = %d\n", 10);
	printf("8진법 = %o\n", 10);
	printf("16진법 = %x\n", 10);

	printf("\n");

	printf("%f\n", 0.00123);
	printf("%e\n", 0.00123);

	printf("\n");

	int a, b;

	printf("6개의 숫자로 이루어진 정수를 입력해주세요. : ");
	scanf("%3d %3d", &a, &b);
	printf("입력된 정수 : %d %d\n", a, b);

	printf("\n");

	int d, o, x;

	printf("10진수 , 8진수 , 16진수를 입력해주세요. : ");
	scanf("%d %o %x", &d, &o, &x);
	printf("d = %d , o = %d , x = %d\n", d, o, x);

	printf("\n");

	char c;
	char s[80], t[80];

	printf("스페이스로 분리된 문자열을 입력해주세요. : ");
	scanf("%s %c %s", s, &c, t);

	printf("입력된 첫번째 문자열 : %s\n", s);
	printf("입력된 문자 : %c\n", c);
	printf("입력된 두번째 문자열 : %s\n", t);

	return 0;
}
