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
		printf("%d��° ���� : %s\n", d + 1, days_name[d]);
	}

	printf("\n");

	printf("ī�� ���� �ڵ带 �Է����ּ���.(0~3) : ");
	scanf("%d", &type);

	switch (type)
	{
	case heart:
		printf("��Ʈ�� �����ϼ̽��ϴ�.��\n");
		break;
	case diamond:
		printf("���̾Ƹ�带 �����ϼ̽��ϴ�.��\n");
		break;
	case space:
		printf("�����̽��� �����ϼ̽��ϴ�.��\n");
		break;
	case clover:
		printf("Ŭ�ι��� �����ϼ̽��ϴ�.��\n");
		break;
	default:
		printf("�ٽ� �����Ͽ� �ּ���.\n");
		break;
	}

	return 0;
}
