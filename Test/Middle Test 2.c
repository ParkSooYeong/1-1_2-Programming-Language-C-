/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Middle Test 2 */

#include <stdio.h>

int main(void)
{
	int i;
	int sum_3 = 0; // 3의 배수
	int sum_4 = 0; // 4의 배수
	int count = 0;
	int count_3 = 0;
	int count_4 = 0;

	for(i = 0; (3456 >= sum_3 - sum_4) || (3678000 >= sum_3 + sum_4); i++)
	{
		if(i % 3 == 0)
		{
			sum_3 += 3;
			count_3++;
		}
		else if(i % 4 == 0)
		{
			sum_4 += 4;
			count_4++;
		}

		count++;
	}

	printf("i 값 : %d\n", count);
	printf("3의 배수 i 카운트 값 : %d\n", count_3);
	printf("4의 배수 i 카운트 값 : %d\n", count_4);
	printf("sum_3 값 : %d\n", sum_3);
	printf("sum_4 값 : %d\n", sum_4);
	printf("sum 값 : %d\n", sum_3 - sum_4);
	printf("sub 값 : %d\n", sum_3 + sum_4);

	getchar();
}
