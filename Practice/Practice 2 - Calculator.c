/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Practice 2 : Calculator */

#include <stdio.h>

int main(void)
{
	int x, y, sum = 0;
	char op = 0;

	while(1)
	{
		printf("Input two numbers, ex \"A (+,-,*,/) B\"\nIf you don't want to, Write (0 q 0 or 0 Q 0) : ");
		scanf("%d %c %d", &x, &op, &y);

		if(op == '+')
		{
			sum = x + y;
			printf("\nsum = %d \n\n\n", sum);
		}
		else if(op == '-')
		{
			sum = x - y;
			printf("\nsum = %d \n\n\n", sum);
		}
		else if(op == '*')
		{
			sum = x * y;
			printf("\nsum = % d \n\n\n", sum);
		}
		else if(op == '/')
		{
			sum = x / y;
			printf("\nsum = %d \n\n\n", sum);
		}
		else if((op == 'q') || (op == 'Q'))
		{
			printf("\nBye\n\n\n");
			break;
		}
		else
		{
			printf("\nTry again\n\n\n");
		}
	}

	return 0;
}
