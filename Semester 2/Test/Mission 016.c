/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Mission 016 */

#include <stdio.h> // 헤더 파일 포함

#define RANGE(x,y,z) ( ( ( (x) < (y) ) || ( (z) < (x) ) ) ? 0 : 1 ) // (a) 매크로 정의
#define ODD_GT(x,y) ( ( (x) % 2 == 1 && (x) > (y) ) ? 1 : 0 ) // (b) 매크로 정의
#define IS_UPPER(c) ( ( (c) >= 'A' && (c) <= 'Z' ) ? 1 : 0 ) // (c) 매크로 정의

int main(void) // 정수형 함수 main 시작
{
	int x, y, z; // 정수형 변수 x,y,z 선언
	char c; // 문자형 변수 c 선언

	printf("x값 y값 z값 c값 입력 : "); // 값 입력 지시 메시지 출력
	scanf("%d %d %d %c", &x, &y, &z, &c); // 값들을 입력받아서 그에 맞는 각각의 변수에 저장

	printf("%d\n", RANGE(x, y, z)); // (a) 매크로 결과 출력
	printf("%d\n", ODD_GT(x, y)); // (b) 매크로 결과 출력
	printf("%d\n", IS_UPPER(c)); // (c) 매크로 결과 출력   

	return 0; // 프로그램 종료
}
