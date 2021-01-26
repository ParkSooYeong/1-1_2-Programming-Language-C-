/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 7 , Number 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void get_random(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%6d\n", rand());
	}
}

int main(void)
{
	double pi = 3.1415926535;

	printf("sin() = %f\n", sin(pi / 2.0));
	printf("cos() = %f\n", cos(pi / 2.0));
	printf("tan() = %f\n", tan(0.5));
	printf("log() = %f\n", log(10.0));
	printf("log10() = %f\n", log10(100.0));
	printf("exp() = %f\n\n", exp(10.0));

	// �Ϲ������� ���� �߻����� �õ�(seed)�� ���� �ð����� �����Ѵ�.
	// ���� �ð��� ������ ������ �޶����� �����̴�.
	srand((unsigned)time(NULL));
	get_random(10);

	return 0;
}
