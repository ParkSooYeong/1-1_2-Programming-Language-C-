/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Final Test 6 */

#define MAX_SIZE() 100 // 매크로 MAX_SIZE를 100으로 정의

int array[MAX_SIZE()]; // 매크로를 이용하여서 int형 배열 정의
int i;

for (i = 0; i < MAX_SIZE(); i++) // 배열의 모든 원소를 0으로 초기화
{
    array[i] = 0;
}
