#include <iostream>
#include "student.h"

using std::cout;
using std::cin;
using std::endl;

void printStudentInfo(student student)
{
	cout << "Student ID: " << student.studentID << " | Enrolled Course: " << student.courseID << " | Last Exam Score: " << student.ExamScore << endl;
}

void printStudentInfo(student studentArr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Student ID: " << studentArr[i].studentID << " | Enrolled Course: " << studentArr[i].courseID << " | Last Exam Score: " << studentArr[i].ExamScore << endl;
	}
}

float examAverage(student studentArr[], size_t size)
{
	float avg = 0;
	for (size_t i = 0; i < size; i++)
	{
		avg += studentArr[i].ExamScore;
	}
	return avg / size;
}

// TODO
float examMedian(student studentArr[], size_t size)
{
	return 0;
}

int numberInCourse(student studentArr[], size_t size, int courseNumber)
{
	float count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (studentArr[i].courseID == courseNumber)
		{
			count++;
		}
	}
	return count;
}