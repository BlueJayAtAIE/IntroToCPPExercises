#include <iostream>
#include "utils.h"
#include "piggybank.h"
#include "student.h"
#include "vector2D.h"
#include "playerVsZombie.h"
#include "highscore.h"
#include "playerStatsInventory.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// 4 Fives, 6 Twos, 12 Ones, 16 Quarters, 20 Dimes, 6 Nickels, 190 Pennies
	piggyBank pig = { 4, 6, 12, 16, 20, 6, 190 };
	cout << calcPiggyBankNotes(pig) << endl; // Should be: 44
	cout << calcPiggyBankCoins(pig) << endl; // Should be: 8.2
	cout << calcPiggyBankTotal(pig) << endl; // Should be: 52.2

	cout << endl;

	student studentArray[3] = { {1001, 1, 32}, {1002, 2, 40}, {1003, 1, 35} };
	//student studentTest = { 1004, 3, 42 };
	printStudentInfo(studentArray, 3);
	//printStudentInfo(studentTest);
	cout << "Average exam score: " << examAverage(studentArray, 3) /*<< " | Exam median: " << examMedian(studentArray, 3)*/ << endl;
	cout << "Students in Course 1: " << numberInCourse(studentArray, 3, 1) << " | " << "Students in Course 2: " << numberInCourse(studentArray, 3, 2) << " | " << "Students in Course 3: " << numberInCourse(studentArray, 3, 3) << endl;

	cout << endl;



	while (true) {}

	return 0;
}