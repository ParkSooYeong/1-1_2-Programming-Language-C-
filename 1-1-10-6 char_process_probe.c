/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
	int c;

	printf("소문자 알파벳을 입력해주세요.(종료 : Ctrl+Z)\n\n");

	while ((c = getchar()) != EOF)
	{
		if (islower(c))
		{
			c = toupper(c);
		}

		putchar(c);
	}

	printf("\n");

	printf("확인하고 싶은 문자를 입력해주세요.(종료 : z)\n\n");

	while ((c = _getch()) != 'z')
	{
		printf("--------------------\n");
		printf("isdigit(%c) = %d\n", c, isdigit(c));
		printf("isalpha(%c) = %d\n", c, isalpha(c));
		printf("islower(%c) = %d\n", c, islower(c));
		printf("ispunct(%c) = %d\n", c, ispunct(c));
		printf("isxdigit(%c) = %d\n", c, isxdigit(c));
		printf("isprint(%c) = %d\n", c, isprint(c));
		printf("--------------------\n\n");
	}

	return 0;
}
