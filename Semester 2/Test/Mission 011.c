/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 011 */

#include <stdio.h> // 헤더 파일 포함
#include <string.h> // 헤더 파일 포함
#include <stdlib.h> // 헤더 파일 포함

struct member // 구조체 member 정의
{
	char BU[5]; // 문자형 배열 멤버 BU 정의, 크기는 5 (부서)
	char IRUM[7]; // 문자형 배열 멤버 IRUM 정의, 크기는 7 (이름)
	int BON; // 정수형 변수 멤버 BON 정의 (본봉)
	int SU; // 정수형 변수 멤버 SU 정의 (수당)
};
struct member DATA;

int main(void) // 정수형 함수 main 시작
{
	struct member DATA; // 구조체 member 변수 DATA 선언
	char BUBI[5]; // 문자형 배열 BUBI 선언, 크기는 5
	int KEB, BUTOT, GTOT = 0;

	printf("            사원 급여표\n"); // 제목 출력
	printf("부서	성명	본봉	수당	합계\n"); // 소제목 출력
	scanf("%s	%s	%d	%d", DATA.BU, DATA.IRUM, &DATA.BON, &DATA.SU); // 부서명, 이름, 본봉, 수당 입력받아서 각각 저장

	while (1) // 반복문 while 사용, 일반적으로 무한 반복, 특정 행동 시 반복문 탈출
	{
		BUTOT = 0;

		BUBI == DATA.BU;

		do // 반복문 do-while 사용
		{
			KEB = DATA.BON + DATA.SU;

			BUTOT = BUTOT + KEB;

			printf("%s	%s	%d	%d	%d", DATA.BU, DATA.IRUM, DATA.BON, DATA.SU, KEB); // 부서명, 이름, 본봉, 수당, 합계 출력

			if (scanf("%s	%s	%d	%d", DATA.BU, DATA.IRUM, &DATA.BON, &DATA.SU) == EOF) // 조건문 if 사용, 만약 입력받은 것들이 파일의 마지막(End of File, Ctrl+Z)이라면 아래 코드 실행
			{
				GTOT = GTOT + BUTOT;

				printf("부서 합계 : %d\n", BUTOT); // 부서 합계 출력
				printf("전체 합계 : %d\n", GTOT); // 전체 합계 출력

				exit(0); // 종료
			}
		} while (strcmp(BUBI, DATA.BU) == 0); // 조건문 while 사용, 문자열을 비교하여 같을 경우
		{
			BUTOT = BUTOT + KEB;

			printf("부서 합계 : %d\n", BUTOT); // 부서 합계 출력
		}
	}
}
