/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 3 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	// ���� ����
	char id[4], pass[5];

	// �Է� �ȳ���
	printf("����Ͻ� ���̵� 3�ڸ��� �̴ϼȷ�, �н����带 4�ڸ��� ���ڷ� �Է����ּ���.\n\n");
	printf("ID : ___\b\b\b");
	scanf("%s", id);
	printf("PASSWORD : ____\b\b\b\b");
	scanf("%s", pass);

	printf("\n\a�Էµ� ���̵�� \"%s\"�̰� �н������ \"%s\"�Դϴ�.\n\n", id, pass);
	
	return 0;
}
