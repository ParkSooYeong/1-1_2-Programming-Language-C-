/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 2 , Number 1 */

// ����ڷκ��� �Է¹��� 2���� ������ ���� ����Ͽ� ���

#define _CRT_SECURE_NO_WARNINGS // Warining C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	int x; // ù��° ������ ������ ����
	int y; // �ι�° ������ ������ ����
	int sum; // 2���� ������ ���� ������ ����

	printf("ù��° ���ڸ� �Է����ּ���. : "); // �Է� �ȳ� �޽��� ���
	scanf("%d", &x); // �ϳ��� ������ �޾Ƽ� x�� ����

	printf("�ι�° ���ڸ� �Է����ּ���. : "); // �Է� �ȳ� �޽��� ���
	scanf("%d", &y); // �ϳ��� ������ �޾Ƽ� y�� ����

	sum = x + y; // ���� 2���� ���Ѵ�.
	printf("�� ���� �� : %d\n", sum); // sum�� ���� 10���� ���·� ���

	return 0; // 0�� �ܺη� ��ȯ
}