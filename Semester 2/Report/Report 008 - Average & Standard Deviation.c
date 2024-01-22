/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Report 008 : Average & Standard Deviation */

#include <stdio.h> // 헤더 파일 포함
#include <math.h> // 헤더 파일 포함

int main(void) // 정수형 함수 main 시작
{
	double n, result = 0, sum = 0, avg, data[20]; // 실수형 변수 각각 선언, 실수형 배열 data 선언, 원소 갯수는 20 (※원소 값에 변화를 주면 실수 자료를 더 많이 입력시킬 수 있음)
	int i; // 정수형 변수 i 선언

	printf("입력하려는 실수 자료의 갯수를 지정하세요(20개 이하) : "); // 실수 자료 갯수 입력 지시 메시지 출력
	scanf("%lf", &n); // 값을 입력받아서 n에 저장

	printf("입력된 갯수 : %lf\n", n); // 실수 자료 갯수 확인 메시지 출력

	if (n <= 20) // 조건문 if 사용, n이 20 이하일 때,
	{
		for (i = 0; i < n; i++) // 반복문 for 사용, i는 0부터 시작, i가 n이 되기 전까지, 1씩 증가
		{
			printf("%d번째 수 : ", i + 1);
			scanf("%lf", &data[i]); // 값을 입력받아서 배열 data의 원소에 각각 저장

			sum += data[i]; // 합계 계산
		}

		printf("합 : %lf\n", sum); // 합 메시지 출력

		avg = sum / n; // 평균 계산

		printf("평균 : %lf\n", avg); // 평균 메시지 출력

		for (i = 0; i < n; i++) // 반복문 for 사용, i는 0부터 시작, i가 n이 되기 전까지, 1씩 증가
		{
			result += (data[i] - avg) * (data[i] - avg); // 편차 계산
		}

		result = result / n; // 분산 계산
		result = sqrt(result); // 표준편차를 구하기 위해 제곱근 계산

		printf("표준편차 : %lf\n", result); // 표준편차 메시지 출력
	}

	return 0; // 프로그램 종료
}
