/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Practice 039 : Point */

#include <stdio.h> // 헤더 파일 포함
#include <math.h> // 헤더 파일 포함

struct point // 구조체 point 정의
{
	int x; // 정수형 멤버 변수 x 정의
	int y; // 정수형 멤버 변수 y 정의
};

int main(void) // 정수형 함수 main 시작
{
	struct point p1, p2; // 구조체 point 변수 p1, p2 선언
	int xdiff, ydiff; // 정수형 변수 xdiff, ydiff 선언
	double dist; // 실수형 변수 dist 선언

	printf("첫번째 점의 좌표를 입력하세요(x y) : "); // 좌표 입력 지시 메시지 출력
	scanf("%d %d", &p1.x, &p1.y); // 입력받은 좌표를 각각의 x좌표, y좌표에 저장

	printf("두번째 점의 좌표를 입력하세요(x y) : "); // 좌표 입력 지시 메시지 출력
	scanf("%d %d", &p2.x, &p2.y); // 입력받은 좌표를 각각의 x좌표, y좌표에 저장

	xdiff = p1.x - p2.x; // = x1 - x2
	ydiff = p1.y - p2.y; // = y1 - y2

	dist = sqrt(xdiff * xdiff + ydiff * ydiff); // 두 점 사이의 거리 계산

	printf("두 점 사이의 거리는 %f입니다.\n", dist); // 계산된 두 점 사이의 거리 값 출력

	return 0; // 프로그램 종료
}
