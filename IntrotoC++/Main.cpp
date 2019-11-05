#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void ageAsk()
{
	int age = -1;

	cout << "whats your age?" << endl;
	cin >> age;
	cout << "cool so you're " << age << "? thats neat i guess." << endl;
}

void finalForm()
{
	int x = 13;
	float y = 13;
	// Fun extra: Put y = 13 / 2 for y to end up as 6;

	x = x / 2;
	y = y / 2;

	cout << x << ' ' << y << endl;

	// Final Form Answers (Not gonna bother typing A-D I can just evaluate them by sight)
	// A: 14
	// B: 9
	// C: 21
	// D: 3
	// E: 6
	// F: 6.5
}

void celsToFahren()
{
	float degCelsius;
	float degFahrenheit;

	cout << "Celsius to Fahrenheit) Enter a temperature in Celsius." << endl;
	cin >> degCelsius;
	degFahrenheit = (degCelsius * 9 / 5) + 32;
	cout << "Celsius:    " << degCelsius << endl;
	cout << "Fahrenheit: " << degFahrenheit << endl << endl;
	
	cout << "Fahrenheit to Celsius) Enter a temperature in Fahrenheit." << endl;
	cin >> degFahrenheit;
	degCelsius = (degFahrenheit - 32) * 5 / 9;
	cout << "Fahrenheit: " << degFahrenheit << endl;
	cout << "Celsius:    " << degCelsius << endl;

}

void areaOfARect()
{
	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	cout << "Area of a Rectangle) Enter the Height for your rectangle." << endl;
	cin >> rectHeight;
	cout << "Enter the Width for your rectangle." << endl;
	cin >> rectWidth;
	rectArea = rectWidth * rectHeight;
	cout << "H: " << rectHeight << ", W: " << rectWidth << endl;
	cout << "Area: " << rectArea << endl;
}

void averageOfFive()
{
	float values[5] {0, 0, 0, 0, 0};
	float avg = 0;

	cout << "Average of Five) Enter a number." << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> values[i];

		if (i < 4)
		{
			cout << "Enter another number." << endl;
		}

		avg += values[i];
	}

	avg = avg / 5;

	cout << endl << values[0] << ", " << values[1] << ", " << values[2] << ", " << values[3] << ", " << values[4] << endl;
	cout << "Average: " << avg << endl;
}

void numberSwap()
{
	int x, y, temp = 0;

	cout << "Number Swap) Enter a value for X." << endl;
	cin >> x;
	cout << "Enter a value for Y." << endl;
	cin >> y;

	temp = x;
	x = y;
	y = temp;

	cout << "X is " << x << endl;
	cout << "Y is " << y << endl;
}

void ageFunFacts()
{
	float age = -1;

	cout << "Hey there, whats your age?" << endl;
	cin >> age;
	cout << "You've been alive for:" << endl;
	cout << "    " << age * 525600 << " minutes" << endl;
	cout << "    " << age * 12 << " months" << endl;
	cout << "    " << age / 10 << " decades" << endl;

	if (age >= 10000)
	{
		cout << "You're a fossil. Literally- one of the youngest discovered fossils was dated to 10,000 years ago." << endl;
	}
	else if (age == 87)
	{
		cout << "Four score and seven years ago, you were born." << endl;
	}
	else if (age == 79)
	{
		cout << "You're as old as the life expectancy in the United States." << endl;
	}
}

void from1To100()
{
	for (int i = 1; i <= 100; i++)
	{
		cout << i << endl;
	}
}

void ageGate()
{
	int age = -1;

	cout << "Enter your age in years." << endl;
	cin >> age;

	if (age >= 65)
	{
		cout << "Congrats you can retire." << endl;
	}
	else if (age >= 50)
	{
		cout << "You can join the AARP. Thats cool I guess." << endl;
	}
	else if (age >= 18)
	{
		cout << "Wow you're an adult. Technically. Have fun with that crisis" << endl;
	}
	else
	{
		cout << "You are like little baby." << endl;
	}
}

void smallestOfNumbers()
{
	int val;
	int numberToCompare = INT16_MAX;
	int numberAmount = 0;

	cout << "Enter the number of numbers you want to input (if you pick 99 thats entirely on you)." << endl;
	cin >> numberAmount;

	while (numberAmount <= 0)
	{
		cout << "Woah woah woah you have to enter a positive number. Try again." << endl;
		cin >> numberAmount;
	}

	cout << "Now enter the first number of your sequence." << endl;
	for (int i = 0; i < numberAmount; i++)
	{
		cin >> val;

		if (val < numberToCompare)
		{
			numberToCompare = val;
		}

		if (i < numberAmount - 1)
		{
			cout << "Enter another number." << endl;
		}
	}

	cout << "The smallest of the input numbers is " << numberToCompare << "." << endl;
}

void evenOrOdd()
{
	int val;

	cout << "Enter a whole number." << endl;
	cin >> val;

	if (val % 2 == 0)
	{
		cout << "The number " << val << " is even." << endl;
	}
	else if (val % 2 == 1 || val % 2 == -1)
	{
		cout << "The number " << val << " is odd." << endl;
	}
	else
	{
		cout << "I don't know how you were able to see this." << endl;
	}
}

void from100To1()
{
	int i = 100;
	while (i > 0)
	{
		cout << i << endl;
		i--;
	}
}

void forAllLeapYears()
{
	for (int i = 0; i <= 3000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			cout << i << endl;
		}
	}
}

void from1995To2019()
{
	int val = 1995;

	do
	{
		cout << val << endl;
		val++;
	} while (val <= 2019);
}

void multiplesOf5()
{
	int startingMultiple, endingMultiple = 0;

	cout << "Enter a starting point." << endl;
	cin >> startingMultiple;

	cout << "Enter an ending point." << endl;
	cin >> endingMultiple;
	cout << endl;

	for (int i = startingMultiple; i <= endingMultiple; i++)
	{
		cout << i * 5 << endl;
	}
}

void numberClamp()
{

}

void calculator()
{

}

void dinosaurBattle()
{

}

void largestOfNumbers()
{

}

void evenOrOddAlt()
{

}

void fizzBuzz()
{

}

void gridGenerator()
{

}

void higherOrLower()
{

}

void pyramidGenerator()
{

}

int main()
{
	char userInput = '?';
	while (!(userInput == '!')) 
	{
		userInput = '?';
		cout << "Enter a character to see an exercise. Enter '?' for a directory. " << endl;
		cin >> userInput;
		cout << endl;

		switch (userInput)
		{
		case '!':
			break;
		case '?':
			cout << "Directory:" << endl;
			cout << "    A: Final Form" << endl;
			cout << "    B: Temperature Converter" << endl;
			cout << "    C: Area of a Rectangle" << endl;
			cout << "    D: Average of Five Numbers" << endl;
			cout << "    E: Number Swap" << endl;
			cout << "    F: Age 'Fun' Facts" << endl;
			cout << "    G: From 1 to 100" << endl;
			cout << "    H: Age Gate" << endl;
			cout << "    I: Smallest Given Number" << endl;
			cout << "    J: Even or Odd" << endl;
			cout << "    K: From 100 to 1" << endl;
			cout << "    L: For All Leap Years" << endl;
			cout << "    M: From 1995 to 2019" << endl;
			cout << "    N: Printing Multiples of Five" << endl;
			cout << "    O: Clamp the Number" << endl;
			cout << "    P: Function Disposable Calculator" << endl;
			cout << "    Q: Dino Discourse" << endl;
			cout << "    R: Largest Given Number" << endl;
			cout << "    S: Even or Odd 2: Electric Boogaloo" << endl;
			cout << "    T: Fizz Buzz" << endl;
			cout << "    U: Grid Generator" << endl;
			cout << "    V: Higher or Lower" << endl;
			cout << "    W: Pyramid Generator" << endl;
			break;
		case 'a':
		case 'A':
			finalForm();
			break;
		case 'b':
		case 'B':
			celsToFahren();
			break;
		case 'c':
		case 'C':
			areaOfARect();
			break;
		case 'd':
		case 'D':
			averageOfFive();
			break;
		case 'e':
		case 'E':
			numberSwap();
			break;
		case 'f':
		case 'F':
			ageFunFacts();
				break;
		case 'g':
		case 'G':
			from1To100();
			break;
		case 'h':
		case 'H':
			ageGate();
			break;
		case 'i':
		case 'I':
			smallestOfNumbers();
			break;
		case 'j':
		case 'J':
			evenOrOdd();
			break;
		case 'k':
		case 'K':
			from100To1();
			break;
		case 'l':
		case 'L':
			forAllLeapYears();
			break;
		case 'm':
		case 'M':
			from1995To2019();
			break;
		case 'n':
		case 'N':
			multiplesOf5();
			break;
		case 'o':
		case 'O':
			numberClamp();
			break;
		case 'p':
		case 'P':
			calculator();
			break;
		case 'q':
		case 'Q':
			dinosaurBattle();
			break;
		case 'r':
		case 'R':
			largestOfNumbers();
			break;
		case 's':
		case 'S':
			evenOrOddAlt();
			break;
		case 't':
		case 'T':
			fizzBuzz();
			break;
		case 'u':
		case 'U':
			gridGenerator();
			break;
		case 'v':
		case 'V':
			higherOrLower();
			break;
		case 'w':
		case 'W':
			pyramidGenerator();
			break;
		default:
			cout << "Unrecognized command." << endl;
			break;
		}

		cout << endl;
	}

	return 0;
}


