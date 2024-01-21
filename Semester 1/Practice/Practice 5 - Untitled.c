/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Practice 5 : Untitled */

#include <stdio.h>

int main(void)
{
	char op = 'b';
	int i;

	while(1)
	{
		printf("Type the input (a, s, g) : ");
		scanf("%c", &op);

		if(op == '\n')
		{
			printf("\r");
		}
		else if(op == 'a')
		{
			for(i = 0; i <= 100; i++)
			{
				printf("we are under attack\n");
			}
		}
		else if(op == 's')
		{
			for(i = 0; i <= 10; i++)
			{
				printf("show me the money\n");
			}
		}
		else if(op == 'g')
		{
			for(i = 0; i <= 50; i++)
			{
				printf("you are genius\n");
			}
		}
		else if((op == 'q') || (op == 'Q'))
		{
			printf("Bye\n");

			break;
		}
		else
		{
			printf("Try again\n");
		}
	}

	return 0;
}
