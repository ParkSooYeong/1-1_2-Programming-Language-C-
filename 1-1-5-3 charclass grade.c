/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	char ch[3];
	int score;

	printf("������ �Է����ּ���.(A+ ~ F) : ");
	scanf("%s", ch);

	if (ch[0] == 'A' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("����� ������ 100~90��!\n\n");
	}
	else if (ch[0] == 'B' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("����� ������ 89~80��~\n\n");
	}
	else if (ch[0] == 'C' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("����� ������ 79~70��.\n\n");
	}
	else if (ch[0] == 'D' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("����� ������ ������ 69~60��;\n\n");
	}
	else if (ch[0] == 'F')
	{
		printf("..������� �ϼž߰ھ�� ��_��...\n\n");
	}
	else
	{
		printf("��Ȯ�� ������ �Է����ּ���.\n\n");
	}

	printf("������ �Է����ּ���.(100 ~ 0) : ");
	scanf("%d", &score);

	if (score <= 100 && score >= 97)
	{
		printf("����� ������ A+ !!!\n\n");
	}
	else if (score <= 96 && score >= 93)
	{
		printf("����� ������ A0 !!\n\n");
	}
	else if (score <= 92 && score >= 90)
	{
		printf("����� ������ A- !\n\n");
	}
	else if (score <= 89 && score >= 87)
	{
		printf("����� ������ B+ ~~~\n\n");
	}
	else if (score <= 86 && score >= 83)
	{
		printf("����� ������ B0 ~~\n\n");
	}
	else if (score <= 82 && score >= 80)
	{
		printf("����� ������ B- ~\n\n");
	}
	else if (score <= 79 && score >= 77)
	{
		printf("����� ������ C+ .\n\n");
	}
	else if (score <= 76 && score >= 73)
	{
		printf("����� ������ C0 ..\n\n");
	}
	else if (score <= 72 && score >= 70)
	{
		printf("����� ������ C- ...\n\n");
	}
	else if (score <= 69 && score >= 67)
	{
		printf("����� ������ D+ ;\n\n");
	}
	else if (score <= 66 && score >= 63)
	{
		printf("����� ������ D0 ;;\n\n");
	}
	else if (score <= 62 && score >= 60)
	{
		printf("����� ������ D- ;;;\n\n");
	}
	else if (score <= 59)
	{
		printf("����� ������ F ��_��\n\n");
	}
	else
	{
		printf("��Ȯ�� ������ �Է����ּ���.\n\n");
	}

	return 0;
}
