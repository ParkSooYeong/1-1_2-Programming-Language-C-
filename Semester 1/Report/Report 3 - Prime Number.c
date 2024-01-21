/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Report 3 : Prime Number */

#include <stdio.h>

int main(void)
{
	int pri, cnt, i, num; // pri는 소수판정을 위해, cnt는 자연수를 위해, num은 범위를 위해 선언
	
	cnt = 2; // cnt는 2이상의 자연수부터.. (1은 소수가 아니다)

	printf("최대 몇까지의 소수를 출력하시겠습니까? : ");
	scanf("%d", &num); // 최대 출력값을 num으로 설정하기 위해 입력받음

	while (cnt < num)
	{
		pri = 1; // pri는 소수판정을 위한 값, 기본값은 1

		for (i = 2; i < cnt; i++) // i는 2부터 cnt값이 되기 전까지 증가시킴 (즉, 2 <= i <= cnt-1)
		{
			if (cnt % i == 0) // cnt가 i로 나눠 떨어지면
			{
				pri = 0; // pri의 값을 0으로 변경, 소수가 아님을 뜻함

				break; // for문 탈출
			}
		}

		if (pri == 1) // 16줄에 있는 if문을 만나지 않았다면 pri의 값은 1을 유지, 즉 소수임을 뜻함
		{
			printf("%d ", cnt); // 해당 숫자를 출력
		}

		cnt++; // cnt의 값을 1씩 증가, 최대 num이 되기전까지
	}

	printf("\n");

	return 0;
}
