/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 6 , Number 8 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("변환하고 싶은 알파벳을 입력해주세요.(종료하고 싶다면 대문자 Z를 입력해주세요.) : ");
		scanf(" %c", &letter);

		if (letter == 'Z')
		{
			break;
		}
		if (letter < 'a' || letter > 'z')
		{
			continue;
		}

		letter -= 32; // 소문자 → 대문자		
		printf("변환된 알파벳은 %c입니다.\n\n", letter);
	}

	return 0;
}
