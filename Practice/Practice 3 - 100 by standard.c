/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Practice 3 : 100 by standard */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x = 0;
	int y= 0;
	int sum = 0;
	int add = 0;

	printf("Input two numbers (ex -> x y) : ");
	scanf("%d %d", &x, &y);

	sum = x + y;

	if (sum < 100)
	{
		while (1)
		{
			printf("\nsum = %d", sum);
			printf("\nadd : ");
			scanf("%d", &add);

			sum = sum + add;

			if (sum <= 100)
			{
				continue;
			}
			else
			{
				break;
			}
		}

		printf("\nresult = %d\n", sum);
	}
	else
	{
		printf("\nresult = %d\n", sum);
	}

	return 0;
}
