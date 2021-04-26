/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 11 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

union example
{
	int i;
	char c;
};

union ip_address
{
	unsigned long laddr;
	unsigned char saddr[4];
};

int main(void)
{
	union example v;
	union ip_address addr;

	v.c = 'A';
	printf("v.c : %c     v.i : %i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c : %c     v.i : %i\n", v.c, v.i);

	printf("\n");

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	return 0;
}
