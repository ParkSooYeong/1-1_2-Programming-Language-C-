/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 10 , Number 9 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s1[] = "10";
	char s2[] = "12.23";
	char buffer[100];

	int i;
	double d;
	double result;

	sscanf(s1, "%d", &i);
	sscanf(s2, "%lf", &d);

	result = i + d;

	sprintf(buffer, "%f", result);
	printf("¿¬»ê °á°ú : %s\n", buffer);

	printf("\n");

	i = atoi(s1);
	d = atof(s2);

	result = i + d;

	sprintf(buffer, "%f", result);
	printf("¿¬»ê °á°ú : %s\n", buffer);

	return 0;
}
