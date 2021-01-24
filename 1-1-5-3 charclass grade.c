/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 5 , Number 3 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h> // 헤더 파일 포함

int main(void) // 함수의 시작
{
	char ch[3];
	int score;

	printf("학점을 입력해주세요.(A+ ~ F) : ");
	scanf("%s", ch);

	if (ch[0] == 'A' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("당신의 점수는 100~90점!\n\n");
	}
	else if (ch[0] == 'B' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("당신의 점수는 89~80점~\n\n");
	}
	else if (ch[0] == 'C' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("당신의 점수는 79~70점.\n\n");
	}
	else if (ch[0] == 'D' && (ch[1] == '+' || ch[1] == '0' || ch[1] == '-'))
	{
		printf("당신의 점수는 점수는 69~60점;\n\n");
	}
	else if (ch[0] == 'F')
	{
		printf("..재수강을 하셔야겠어요 ㅠ_ㅠ...\n\n");
	}
	else
	{
		printf("정확한 학점을 입력해주세요.\n\n");
	}

	printf("점수를 입력해주세요.(100 ~ 0) : ");
	scanf("%d", &score);

	if (score <= 100 && score >= 97)
	{
		printf("당신의 학점은 A+ !!!\n\n");
	}
	else if (score <= 96 && score >= 93)
	{
		printf("당신의 학점은 A0 !!\n\n");
	}
	else if (score <= 92 && score >= 90)
	{
		printf("당신의 학점은 A- !\n\n");
	}
	else if (score <= 89 && score >= 87)
	{
		printf("당신의 학점은 B+ ~~~\n\n");
	}
	else if (score <= 86 && score >= 83)
	{
		printf("당신의 학점은 B0 ~~\n\n");
	}
	else if (score <= 82 && score >= 80)
	{
		printf("당신의 학점은 B- ~\n\n");
	}
	else if (score <= 79 && score >= 77)
	{
		printf("당신의 학점은 C+ .\n\n");
	}
	else if (score <= 76 && score >= 73)
	{
		printf("당신의 학점은 C0 ..\n\n");
	}
	else if (score <= 72 && score >= 70)
	{
		printf("당신의 학점은 C- ...\n\n");
	}
	else if (score <= 69 && score >= 67)
	{
		printf("당신의 학점은 D+ ;\n\n");
	}
	else if (score <= 66 && score >= 63)
	{
		printf("당신의 학점은 D0 ;;\n\n");
	}
	else if (score <= 62 && score >= 60)
	{
		printf("당신의 학점은 D- ;;;\n\n");
	}
	else if (score <= 59)
	{
		printf("당신의 학점은 F ㅠ_ㅠ\n\n");
	}
	else
	{
		printf("정확한 점수를 입력해주세요.\n\n");
	}

	return 0;
}
