#pragma once

struct student
{
	int studentID;
	int courseID;

	int ExamScore;
};

void printStudentInfo(student student);
void printStudentInfo(student studentArr[], size_t size);

float examAverage(student studentArr[], size_t size);
float examMedian(student studentArr[], size_t size);

int numberInCourse(student studentArr[], size_t size, int courseNumber);