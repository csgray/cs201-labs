// lab 18a.cpp
// Corey Gray
// Based on letters.cpp by Glenn G. Chappell
// 14 Oct 2016
//
// For CS 201 Fall 2016
// Receive input then print a decreasing pyramid of characters by taking a letter of each end

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;

// Working on a reusable prompt function
void input(string prompt, string &output)
{
	string line;
	cout << prompt << endl;
	getline(cin, line);
}

int main()
{
	cout << "This program prints a decreasing pyramid based on your input." << endl;

	while (true)
	{
		// Input a line, with error checking
		string line;
		cout << "Type some text (empty line to end): ";
		getline(cin, line);
		if (!cin)
			return 0;
		if (line == "")
			return 0;

		int size = line.size();
		int rows = size / 2;

		string blanks = "                    ";

		for (int i = 0; i <= rows; i++)
		{
			int width = size - (2 * i);
			cout << blanks.substr(0, i);
			cout << line.substr(i, width) << endl;
		}
	}


}
