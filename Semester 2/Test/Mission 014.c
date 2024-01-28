/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 014 */

#include <stdio.h> // 헤더 파일 포함

#define PI 3.14 // π값 3.14 정의

enum type { TRIANGLE, RECTANGLE, CIRCLE }; // 열거형 Type 정의

typedef union DATA // 공용체 Data 정의
{
	int triangle_width; // 정수형 멤버 변수 triangle_width 정의(삼각형 밑변)
	int triangle_height; // 정수형 멤버 변수 triangle_height 정의(삼각형 높이)
	int rectangle_width; // 정수형 멤버 변수 rectangle_width 정의(사각형 가로)
	int rectangle_height; // 정수형 멤버 변수 rectangle_height 정의(사각형 세로)
	float r; // 실수형 멤버 변수 r 정의
} DT; // DT 타입으로 재정의

int main(void) // 정수형 함수 main 시작
{
	int a; // 정수형 변수 a 선언

	DT data; // DT형 변수 data 선언
	int height = 0; // 정수형 변수 height 선언, 초기값은 0

	printf("도형의 종류를 선택하세요.(0=삼각형, 1=사각형, 2=원) : "); // 도형 종류 입력 지시 메시지 출력
	scanf("%d", &a); // 도형 종류 코드를 입력받아서 a에 저장

	switch (a) // 조건문 switch 사용, a의 경우에 따라서 아래의 맞는 코드 실행
	{
		case TRIANGLE: // 입력받은 도형 코드 0일 경우(삼각형)
			printf("삼각형의 높이 : ");
			scanf("%d", &data.triangle_height);
			height = data.triangle_height;
			printf("삼각형의 밑변 : ");
			scanf("%d", &data.triangle_width);
			printf("삼각형의 넓이 : %d\n", height * data.triangle_width / 2);
			break; // 조건문 탈출

		case RECTANGLE: // 입력받은 도형 코드가 1일 경우(사각형)
			printf("사각형의 세로 : ");
			scanf("%d", &data.triangle_height);
			height = data.rectangle_height;
			printf("사각형의 가로 : ");
			scanf("%d", &data.triangle_width);
			printf("사각형의 넓이 : %d\n", height * data.rectangle_width);
			break; // 조건문 탈출

		case CIRCLE: // 입력받은 도형 코드가 2일 경우(원)
			printf("원의 반지름 : ");
			scanf("%f", &data.r);
			printf("원의 넓이 : %.2f\n", (float)(data.r * data.r * PI));
			break; // 조건문 탈출

		default: // 입력받은 도형 코드가 0~2 이외일 경우
			printf("도형의 종류 코드는 0~2사이입니다.\n"); // 메시지 출력

			return 0; // 종료
	}

	return 0; // 프로그램 종료
}
