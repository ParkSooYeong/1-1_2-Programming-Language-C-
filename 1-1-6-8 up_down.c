/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 8 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("��ȯ�ϰ� ���� ���ĺ��� �Է����ּ���.(�����ϰ� �ʹٸ� �빮�� Z�� �Է����ּ���.) : ");
		scanf(" %c", &letter);

		if (letter == 'Z')
		{
			break;
		}
		if (letter < 'a' || letter > 'z')
		{
			continue;
		}

		letter -= 32; // �ҹ��� �� �빮��		
		printf("��ȯ�� ���ĺ��� %c�Դϴ�.\n\n", letter);
	}

	return 0;
}
