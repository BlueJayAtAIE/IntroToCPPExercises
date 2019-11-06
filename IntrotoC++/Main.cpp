#include <iostream>
#include "utils.h"
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
	float degCelsius = 0;
	float degFahrenheit = 0;

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
	int x = 0, y = 0, temp = 0;

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

	while (numberAmount <= 0)
	{
		cout << "Enter the number of numbers you want to input (if you pick 99 thats entirely on you)." << endl;
		cin >> numberAmount;

		if (numberAmount <= 0)
		{
			cout << "Woah woah woah you have to enter a positive number. Try again." << endl;
		}
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
	int startingMultiple = 0, endingMultiple = 0;

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
	int val;
	cout << "Enter a number. This number will be clamped between 15 and 30." << endl;
	cin >> val;

	if (val > 30)
	{
		val = 30;
	}
	if (val < 15)
	{
		val = 15;
	}

	cout << "The final value is " << val << "." << endl;
}

void calculator()
{
	// TODO
}

void dinosaurBattle()
{
	char userInputchar = '?';
	int userInputint = 0, playerPoint = 0, dinoPoint = 0;

	cout << "Now it's time for an ultimate test of strength............. For me. This exercise torments me." << endl << endl << "Anyways, fight this dinosaur." << endl;

	cout << endl;
	cout << "How would you rate your strength on a scale from 1-10?" << endl;
	while (true)
	{
		cin >> userInputint;

		if (userInputint == 4)
		{
			cout << "DRAW" << endl;
			break;
		}

		if (userInputint > 10)
		{
			cout << "It CAN'T be GREATER THAN 10. Enter another number." << endl;
		}
		else if (userInputint > 4)
		{
			cout << "PLAYER POINT" << endl;
			playerPoint++;
			break;
		}

		if (userInputint < 1)
		{
			cout << "No no it CAN'T be LESS THAN 1- that'd be pretty sad. Enter another number." << endl;
		}
		else if (userInputint < 4)
		{
			cout << "DINO POINT" << endl;
			dinoPoint++;
			break;
		}
	}

	cout << endl;
	cout << "Which of the following did you take into battle?" << endl;
	cout << "    [R]OCK" << endl;
	cout << "    [P]APER" << endl;
	cout << "    [S]CISSORS" << endl;
	while (true)
	{
		cin >> userInputchar;

		if (userInputchar != 'r' && userInputchar != 'p' && userInputchar != 's')
		{
			cout << "That's not a valid input. Try again." << endl;
		}
		else if (userInputchar == 'p')
		{
			cout << "DRAW" << endl;
			break;
		}
		else if (userInputchar == 's')
		{
			cout << "PLAYER POINT" << endl;
			playerPoint++;
			break;
		}
		else
		{
			cout << "DINO POINT" << endl;
			dinoPoint++;
			break;
		}
	}

	cout << endl;
	cout << "How many battles have you fought?" << endl;
	while (true)
	{
		cin >> userInputint;

		if (userInputint < 0)
		{
			cout << "It's not possible to have fought negitive battles! Enter another number." << endl;
		}
		else if (userInputint == 2)
		{
			cout << "DRAW" << endl;
			break;
		}
		else if (userInputint > 2)
		{
			cout << "PLAYER POINT" << endl;
			playerPoint++;
			break;
		}
		else if (userInputint < 2)
		{
			cout << "DINO POINT" << endl;
			dinoPoint++;
			break;
		}
	}

	cout << endl;
	cout << "Did you get enough sleep last night?" << endl;
	cout << "    [Y]ES" << endl;
	cout << "    [N]O" << endl;
	while (true)
	{
		cin >> userInputchar;

		if (userInputchar != 'y' && userInputchar != 'n')
		{
			cout << "That's not a valid answer! Try again." << endl;
		}
		else if (userInputchar == 'y')
		{
			//cout << "Oh- wow really? Nice. I certainly didn't it seems. "
			cout << "PLAYER POINT" << endl;
			playerPoint++;
			break;
		}
		else
		{
			cout << "DINO POINT" << endl;
			dinoPoint++;
			break;
		}
	}

	cout << endl;

	if (playerPoint == dinoPoint)
	{
		cout << endl << "Woah- looks like you two are tied for points. Time for a SUDDEN DEATH." << endl << "How much Vitamin C do you get everyday?" << endl;
		cin >> userInputint;

		if (userInputint >= 75)
		{
			cout << "PLAYER POINT" << endl;
			playerPoint++;
		}
		else
		{
			cout << "DINO POINT" << endl;
			dinoPoint++;
		}

		cout << endl;
	}

	if (playerPoint > dinoPoint)
	{
		cout << "Winner is You" << endl;
	}
	else
	{
		cout << "You are eaten by a dinosaur." << endl;
	}

	cout << "FINAL SCORES: " << playerPoint << " PLAYER | " << dinoPoint << " DINO" << endl;
}

void largestOfNumbers()
{
	int val;
	int numberToCompare = INT16_MIN;
	int numberAmount = 0;

	while (numberAmount <= 0)
	{
		cout << "Enter the number of numbers you want to input (if you pick 99 thats entirely on you)." << endl;
		cin >> numberAmount;

		if (numberAmount <= 0)
		{
			cout << "Woah woah woah you have to enter a positive number. Try again." << endl;
		}
	}

	cout << "Now enter the first number of your sequence." << endl;
	for (int i = 0; i < numberAmount; i++)
	{
		cin >> val;

		if (val > numberToCompare)
		{
			numberToCompare = val;
		}

		if (i < numberAmount - 1)
		{
			cout << "Enter another number." << endl;
		}
	}

	cout << "The largest of the input numbers is " << numberToCompare << "." << endl;
}

void evenOrOddAlt()
{
	int startingNumber = 0, endingNumber = 0;
	cout << "Enter a number to act as a starting point." << endl;
	cin >> startingNumber;

	cout << "Enter a number to act as an ending point." << endl;
	cin >> endingNumber;

	if (startingNumber > endingNumber)
	{
		cout << "Flipping " << endingNumber << " to be the starting point." << endl;
		int temp = startingNumber;
		startingNumber = endingNumber;
		endingNumber = temp;
	}

	for (int i = startingNumber; i <= endingNumber; i++)
	{
		if (i % 2 == 0)
		{
			cout << "Even" << endl;
		}
		if (i % 2 == 1 || 1 % 2 == -1)
		{
			cout << "Odd" << endl;
		}
	}
}

void fizzBuzz()
{
	int startingNumber = 0, endingNumber = 0;
	cout << "Enter a number to act as a starting point." << endl;
	cin >> startingNumber;

	cout << "Enter a number to act as an ending point." << endl;
	cin >> endingNumber;

	if (startingNumber > endingNumber)
	{
		cout << "Flipping " << endingNumber << " to be the starting point." << endl;
		int temp = startingNumber;
		startingNumber = endingNumber;
		endingNumber = temp;
	}

	for (int i = startingNumber; i <= endingNumber; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}

void gridGenerator()
{
	int x = 0, y = 0;

	cout << "Enter a number for the height of the grid." << endl;
	cin >> x;

	cout << "Enter a number for the width of the grid." << endl;
	cin >> y;

	cout << endl << "Printing a " << x << "x" << y << " grid." << endl;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "x";
		}
		cout << endl;
	}
}

void higherOrLower()
{
	int toGuess = 0, userGuess = 0;
	toGuess = rand() % 10 + 1;

	cout << "I've got a random number here thats between 1-10. Try to guess it in 5 turns." << endl << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Round " << i << " - Make your guess." << endl;
		cin >> userGuess;

		if (userGuess == toGuess)
		{
			cout << "Congradtions, You Done It." << endl;
			return;
		}
		if (userGuess < toGuess)
		{
			cout << "Too Low" << endl;
			if (userGuess < 1)
			{
				cout << "Also the number won't be lower than 1..." << endl;
			}
		}
		if (userGuess > toGuess)
		{
			cout << "Too High" << endl;
			if (userGuess > 10)
			{
				cout << "Also the number won't be higher than 10..." << endl;
			}
		}
	}

	cout << "Aw bummer you didn't guess it right." << endl;
}

void pyramidGenerator()
{
	// TODO

	int x = 0, y = 0;

	cout << "Enter a number that will be the amount of levels of pyramid has." << endl;
	cin >> x;

	cout << "Enter a number that will be the width of each level of the pyramid." << endl;
	cin >> y;

	for (int i = 0; i < x; i++)
	{
		
		int print = (y * (i * 2)) * 2;
		
		for (int k = 0; k < print; k++)
		{
			cout << "x";
		}

		cout << endl;
	}
}

int main()
{
	char userInput = '?';
	while (userInput != '!') 
	{
		userInput = '?';
		cout << "Enter a character to see an exercise. Enter '?' for a directory. Press '!' to close." << endl;
		cin >> userInput;
		cout << endl;

		switch (userInput)
		{
		case '!':
			cout << "Bye bye!" << endl;
			break;
		case '?':
			cout << "Directory:" << endl;
			cout << "    VARIABLES AND OPERATORS ---------" << endl;
			cout << "    A: Final Form" << endl;
			cout << "    B: Temperature Converter" << endl;
			cout << "    C: Area of a Rectangle" << endl;
			cout << "    D: Average of Five Numbers" << endl;
			cout << "    E: Number Swap" << endl;
			cout << "    F: Age 'Fun' Facts" << endl;
			cout << "    G: From 1 to 100" << endl;
			cout << "    H: Age Gate" << endl;
			cout << "    I: Smallest Given Number" << endl;
			cout  << endl << "    CONDITIONALS AND LOOPS ----------" << endl;
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


