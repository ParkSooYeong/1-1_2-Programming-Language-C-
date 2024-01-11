/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Practice 4 : Prime Number */

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int num;

	printf("Type the Number : ");
	scanf("%d", &num);

	for(i = 2; i <= num; i++)
	{
		for(j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if(i == j)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
