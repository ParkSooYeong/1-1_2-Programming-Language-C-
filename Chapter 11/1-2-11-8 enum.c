/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 11 , Number 8 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };
enum cardtype { heart, diamond, space, clover };

char *days_name[] = {
	"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
};

int main(void)
{
	enum days d;
	enum cardtype type;

	for (d = MON; d <= SUN; d++)
	{
		printf("%d번째 요일 : %s\n", d + 1, days_name[d]);
	}

	printf("\n");

	printf("카드 종류 코드를 입력해주세요.(0~3) : ");
	scanf("%d", &type);

	switch (type)
	{
	case heart:
		printf("하트를 선택하셨습니다.♡\n");
		break;
	case diamond:
		printf("다이아몬드를 선택하셨습니다.◇\n");
		break;
	case space:
		printf("스페이스를 선택하셨습니다.♤\n");
		break;
	case clover:
		printf("클로버를 선택하셨습니다.♧\n");
		break;
	default:
		printf("다시 선택하여 주세요.\n");
		break;
	}

	return 0;
}
