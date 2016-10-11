// labo6a/Source.cpp
// Corey Gray
// 14 Sep 2016
//
// For CS 201 Spring 2016
// Inputs a number from the user and does one of X different things based on that number

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;


// Main program
// Input an integer with error checking.
int main()
{
	// Input a line, with error checking
	string line;

	while (true)
	{
		// Prompt
		cout << "Type an integer between 1 and 3 or type 0 to quit: ";
		getline(cin, line);
		if (!cin)
		{
			cout << "Error in input" << endl;
			return 0;
		}

		// Input an integer from the above line
		istringstream in(line);
		int n;  // Integer to input from line
		in >> n;
		if (!in)
		{
			cout << "Error in input" << endl;
			return 0;
		}

		// Checks if n is 0
		if (n == 0)
		{
			cout << "Goodbye." << endl;
			return 0;
		}

		// Checks if n is outside acceptable values
		if (n < 0 || n > 3) 
		{
			cout << "Integer must be between 1 and 3." << endl;
			continue;
		}

		// Switch for n between 1 and 3
		switch (n)
		{
		case 1:
			cout << "You're number one!" << endl;
			break;
		case 2:
			cout << "Two is company." << endl;
			break;
		case 3:
			cout << "But three is a crowd." << endl;
			break;
		}
	}

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	cout << endl;
}

