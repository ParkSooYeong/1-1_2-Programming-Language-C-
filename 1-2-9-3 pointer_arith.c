/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 9 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS //Warning C4996 Error

#include <stdio.h>

int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;

	printf("Áő°Ą Ŕü pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("Áő°Ą ČÄ pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	printf("pc + 2 = %d, pi + 2 = %d, pd + 2 = %d\n", pc + 2, pi + 2, pd + 2);

	printf("\n");

	int i = 10;
	int *p_i = &i;

	printf("i = %d, pi = %p\n", i, p_i);
	(*p_i)++;
	printf("i = %d, pi = %p\n", i, p_i);

	printf("i = %d, pi = %p\n", i, p_i);
	*p_i++;
	printf("i = %d, pi = %p\n", i, p_i);

	return 0;
}
