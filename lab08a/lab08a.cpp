// lab08a/lab08a.cpp
// Corey Gray
// 19 Sep 2016
//
// For CS 201 Spring 2016
// Receives a user's string then prints it backwards

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

void string_length(string s)
{
	int size = s.size();
	for (int i = 0; i < size; ++i)
	{
		int backwards = s.size() - 1 - i;
		cout << s[backwards];
	}
	cout << endl;
}

int main()
{
	while (true)
	{
		string input;
		cout << "Enter a string to print it backwards: " << endl;
		getline(cin, input);
		if (!cin)
		{
			cout << "Error in input" << endl;
			return 0;
		}

		string_length(input);
	}
}