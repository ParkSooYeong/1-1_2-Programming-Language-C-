/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 10 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	char name[100];
	char city[100];

	printf("이름을 입력해주세요. : ");
	scanf("%s", name);
	printf("도시를 입력해주세요. : ");
	scanf("%s", city);

	printf("이름 : %s , 도시 : %s\n\n", name, city);

	printf("이름과 도시를 입력해주세요. : ");
	gets(name);
	gets(city);

	puts(name);
	puts(city);

	return 0;
}
