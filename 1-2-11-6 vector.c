/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 11 , Number 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

struct vector
{
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
	struct vector a = { 1.0,2.0 };
	struct vector b = { 3.0,4.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);

	printf("∫§≈Õ¿« «’ : (%f , %f)\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}
