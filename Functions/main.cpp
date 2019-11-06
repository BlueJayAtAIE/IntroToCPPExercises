#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	hello();

	cout << endl;

	cout << square(4) << endl;

	cout << endl;

	cout << decimal(1, 4) << endl;
	cout << decimal(4, 4) << endl;
	cout << decimal(1, 2) << endl;

	cout << endl;

	printPair(4, 1);
	printPair(2, 2);
	printPair(0, 3);

	cout << endl;

	cout << sumThree(1, 8, 3) << endl;
	cout << sumThree(5, 8, 1) << endl;
	cout << sumThree(-5, 6, 2) << endl;

	cout << endl;

	cout << min(4, 6) << endl;
	cout << min(5, 2) << endl;
	cout << min(7, 7) << endl;

	cout << endl;
	
	cout << max(4, 6) << endl;
	cout << max(5, 2) << endl;
	cout << max(7, 7) << endl;

	cout << endl;

	cout << clamp(15, 30, 11) << endl;
	cout << clamp(2, 7, 5) << endl;
	cout << clamp(0, 10, -3) << endl;
	cout << clamp(0, 100, 45) << endl;
	cout << clamp(25, 30, 30) << endl;
	cout << clamp(10, 25, 75) << endl;

	cout << endl;

	while (true) {}

	return 0;
}