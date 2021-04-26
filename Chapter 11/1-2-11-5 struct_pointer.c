/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Chapter 11 , Number 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

struct student
{
	int number;
	char name[20];
	double grade;
	struct date *dob;
};

int main(void)
{
	struct date d = { 1998,04,14 };
	struct student s = { 20170910,"ParkSooYoung",4.3 };

	s.dob = &d;

	printf("생년월일 : %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %f\n", s.grade);

	return 0;
}
