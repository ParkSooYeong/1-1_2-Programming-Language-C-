/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 4 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int x, y;

	printf("ù��° ���� �Է����ּ���. : ");
	scanf("%d", &x);
	printf("�ι�° ���� �Է����ּ���. : ");
	scanf("%d", &y);

	printf("\nū ���� %d�Դϴ�.\n", (x > y) ? x : y);
	printf("���� ���� %d�Դϴ�.\n\n", (x < y) ? x : y);

	return 0;
}
