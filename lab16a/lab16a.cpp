// lab 16a.cpp
// Corey Gray
// Based on letters.cpp by Glenn G. Chappell
// 10 Oct 2016
//
// For CS 201 Fall 2016
// Count Letters in a String

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;


// countLetters
// Given a string, return the number of letters it contains.
int countLetters(const string &s)
{
	int lower = 0;
	int upper = 0;
	int digit = 0;
	int length = s.size();
	
	for (int i = 0; i <= length; ++i)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			++lower;
		if (s[i] <= 'Z' && s[i] >= 'A')
			++upper;
		if (s[i] <= '9' && s[i] >= '0')
			++digit;
	}
	
	cout << "There were " << lower << " lowercase characters." << endl;
	cout << "There were " << upper << " uppercase characters." << endl;
	cout << "There were " << digit << " digits." << endl;

	return lower + upper;
}


// Main program
// Repeat: input a line and count the letters in it.
int main()
{
	// Print opening message
	cout << "Counting letters in a line" << endl;
	cout << endl;

	while (true)
	{
		// Input a line, with error checking
		string line;
		cout << "Type some text (empty line to end): ";
		getline(cin, line);
		if (!cin)
			return 0;
		if (line == "")
			break;

		// Echo typing and count letters
		cout << endl;
		cout << "You typed: \"" << line << "\"" << endl;

		int numletters = countLetters(line);
		cout << "This line contains ";
		if (numletters == 0)
			cout << "no letters";
		else if (numletters == 1)
			cout << "1 letter";
		else
			cout << numletters << " letters";
		cout << endl << endl;
	}
	cout << endl;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}

