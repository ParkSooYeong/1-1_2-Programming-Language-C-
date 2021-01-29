/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getch();

		if (ch == 'q')
		{
			break;
		}

		putchar(ch);
	}

	return 0;
}
