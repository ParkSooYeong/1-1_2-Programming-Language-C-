/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 2 , Number 2 */

// ���� ������ ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS // Warining C4996 Error

#include <stdio.h> // ��� ���� ����

int main(void) // �Լ��� ����
{
	float radius; // ���� ������
	float area; // ����

	printf("���� �������� �Է����ּ���. : "); // �Է� �ȳ� �޽��� ���
	scanf("%f", &radius); // �ϳ��� �Ǽ��� �޾Ƽ� radius�� ����

	area = 3.14 * radius * radius; // ���� ���� ���

	printf("���� ���� : %f\n", area); // area�� ���� �Ǽ� ���·� ���

	return 0; // 0�� �ܺη� ��ȯ
}