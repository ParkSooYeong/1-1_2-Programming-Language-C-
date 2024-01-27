/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 040 : Nested_Struct */

#include <stdio.h> // 헤더 파일 포함

struct point // 구조체 point 정의
{
	int x; // 정수형 멤버 변수 x 정의
	int y; // 정수형 멤버 변수 y 정의
};

struct rect // 구조체 rect 정의
{
	struct point p1; // 구조체 멤버 point 변수 p1 정의
	struct point p2; // 구조체 멤버 point 변수 p2 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct rect r; // 구조체 rect 변수 r 선언
	int w, h, area, peri; // 정수형 변수 w, h, area, peri 선언

	printf("왼쪽 상단의 좌표를 입력하세요 : "); // 좌표 입력 지시 메시지 출력
	scanf("%d %d", &r.p1.x, &r.p1.y); // 입력받은 좌표를 각각의 x좌표, y좌표에 저장

	printf("오른쪽 하단의 좌표를 입력하세요 : "); // 좌표 입력 지시 메시지 출력
	scanf("%d %d", &r.p2.x, &r.p2.y); // 입력받은 좌표를 각각의 x좌표, y좌표에 저장

	w = r.p2.x - r.p1.x; // 가로 길이 계산
	h = r.p2.y - r.p1.y; // 세로 길이 계산

	area = w * h; // = 가로 x 세로 = 넓이 계산
	peri = 2 * w + 2 * h; // = 가로 x 2 + 세로 x 2 = 둘레 계산
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri); // 면적, 둘레 계산값 출력

	return 0; // 프로그램 종료
}
