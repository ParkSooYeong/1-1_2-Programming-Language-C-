/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 11 , Number 1 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("ù��° ���� ��ǥ�� �Է����ּ���.(x y) :");
	scanf("%d %d", &p1.x, &p1.y);

	printf("�ι�° ���� ��ǥ�� �Է����ּ���.(x y) :");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("�� �� ������ �Ÿ��� %f�Դϴ�.\n", dist);

	return 0;
}
