// Problem5-3-9_AverageOfStudentAges.c : Defines the entry point for the console application.
//

#include "stdafx.h"
#define LENGTH 10

#pragma warning( disable : 4996 )

struct Student
{
	char sname[20];
	size_t sage;
};

typedef struct Student Student;


int main()
{
	Student student;
	size_t sum = 0;
	for (size_t i = 0; i < LENGTH; i++)
	{
		printf("Enter student name: ");
		gets_s(student.sname, 20);
		printf("Enter student age: ");
		scanf("%zu", &student.sage);
		getchar();
		sum += student.sage;
	}
	float average = (float)sum / LENGTH;
	printf("%f", average);
    return 0;
}

