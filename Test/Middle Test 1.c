/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Middle Test 1 */

#include <stdio.h>

int main(void)
{
	int num_1, num_2;

	printf("입력 받을 숫자를 쓰세요. : ");
	scanf("%d", &num_1);

	num_2 = num_1 + 1;

	while((num_1 % 2 == 1) && (num_2 <= 378675))
	{
		num_2 += 2;
	}

	while((num_1 % 2 == 0) && (num_2 <= 378675))
	{
		num_2 += 2;
	}

	printf("총합 = %d", num_2);

	getchar();
	getchar();
}
