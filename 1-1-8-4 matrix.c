/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , Chapter 8 , Number 4 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void)
{
	int A[ROWS][COLS] = { {1,2,3},
						  {4,5,6},
						  {7,8,9} };
	int B[ROWS][COLS] = { {0,0,1},
						  {0,1,0},
						  {1,0,0} };
	int C[ROWS][COLS];
	int r, c;

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			C[r][c] = A[r][c] + B[r][c];
		}
	}

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			printf("%d ", C[r][c]);
		}

		printf("\n");
	}

	return 0;
}
