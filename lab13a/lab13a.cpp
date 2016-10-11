// lab13a.cpp
// Corey Gray
// 30 Sep 2016
//
// For CS 201 Spring 2016
// Initializes a vector of strings and prints it using a range-based for-loop

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <vector>
using std::vector;

int main()
{
	vector <string> words{
		"These are words.",
		"These are also words.",
		"I didn't sleep last night.",
		"So this is all you get."
	};

	cout << "Enter lines of text to have their first letter replaced by 'x' followed by a blank line:" << endl;

	while (true)
	{
		string input;
		getline(cin, input);

		if (!cin)
		{
			cout << "Error in input" << endl;
			return 0;
		}

		words.push_back(input);

		if (input == "")
			break;

	}

	for (string &x : words)
	{
		if (x != "")
		{
			x.replace(0, 1, "x");
		}
	}
	
	for (auto w : words)
	{
		cout << w << endl;
	}
}