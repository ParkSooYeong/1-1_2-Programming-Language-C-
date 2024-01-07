/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Practice 1 : Reverse Order */

#include <stdio.h>

int main(void)
{
	int i;

	for(i = 1000; i > 0; i--)
	{
		if(i % 3 == 0)
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return 0;
}
