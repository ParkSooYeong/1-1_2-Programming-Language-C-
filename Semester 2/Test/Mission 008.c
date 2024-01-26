/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 008 */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	char ex[50];
	char st[100];

	printf("문장을 입력하시오 : ");
	gets(ex);

	strcpy(st, "\n#include <stdio.h>\n");
	strcat(st, "int main(void)\n");
	strcat(st, "{\n");
	strcat(st, ex);
	strcat(st, "\nreturn 0;\n");
	strcat(st, "}\n");

	printf("전체 프로그램 : %s", st);

	return 0;
}
