/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int month, days;

	printf("�ϼ��� �˰� ���� ���� �Է����ּ���. : ");
	scanf("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}

	printf("%d���� �ϼ��� %d�Դϴ�.\n\n", month, days);

	return 0;
}
