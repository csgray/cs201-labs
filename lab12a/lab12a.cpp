// lab12a.cpp
// Corey Gray
// 26 Sep 2016
//
// For CS 201 Spring 2016
// Receives text from the user then prints out every line

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
	cout << "This program will echo your input back to you." << endl;
	cout << "Type your input followed by a blank line: " << endl;

	vector<string> text;

	while (true)
	{
		string input;
		getline(cin, input);

		if (!cin)
		{
			cout << "Error in input" << endl;
			return 0;
		}

		text.push_back(input);

		if (input == "")
			break;

	}

	for (int i = 0; i < text.size(); ++i)
	{
		cout << text[i] << endl;
	}
}