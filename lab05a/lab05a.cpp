// Source: lab05a/lab05a.cpp
// Author: Corey Gray
// Date: 20160912
// Purpose: Asks the user for input and exits if the line is longer than 10 characters

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

int main()
{
	while (true)
	{
		cout << "Type something. If it is longer than 10 characters, the program will exit." << endl;
		string line;
		getline(cin, line);
		cout << endl;

		// Error checking
		if (!cin)
		{
			cout << "That was not valid input." << endl;
			cout << "Press ENTER to quit.";
			while (cin.get() != '\n');

			return 0;
		}

		int n = line.size();
		
		if (n > 10)
		{
			cout << "Your entry was " << n << " characters long which breaks the threshold." << endl;
			return 0;
		}

		else
		{
			cout << "Your entry was " << n << " characters long." << endl;
			cout << "That's fewer than 10 characters, so it's back to the start." << endl;
			cout << endl;
			continue;
		}

	}
}