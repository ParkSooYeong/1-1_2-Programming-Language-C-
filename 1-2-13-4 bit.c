/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 13 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

struct product
{
	unsigned style : 3;
	unsigned size : 2;
	unsigned color : 1;
};

int main(void)
{
	int x = 9; // 1001
	int y = 10; // 1010

	printf("bit AND = %08X\n", x & y); // 1000
	printf("bit OR = %08X\n", x | y); // 1011
	printf("bit XOR = %08X\n", x ^ y); // 0011
	printf("bit NOT = %08X\n", ~x); // 0110

	printf("bit << = %08X\n", x << 2); // 100100
	printf("bit >> = %08X\n", x >> 2); // 000010

	printf("\n");

	struct product p;

	p.style = 5;
	p.size = 3;
	p.color = 1;

	printf("style = %d , size = %d , color = %d\n", p.style, p.size, p.color);
	printf("sizeof(p) = %d\n", sizeof(p));
	printf("p = %x\n", p);

	return 0;
}
