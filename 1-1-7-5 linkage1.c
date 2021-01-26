/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int all_files;
extern void sub();
static int this_file;

int main(void)
{
	sub();
	printf("%d\n\n", all_files);
	return 0;
}
