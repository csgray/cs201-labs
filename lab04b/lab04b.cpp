// Source: lab04b/Source.cpp
// Author: Corey Gray
// Date: 20160909
// Purpose: Asks the user for a special character and two integers then prints a box.

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::istringstream;

int main()
{
	cout << "Please enter a special character." << endl;
	char special;
	if (!cin)
	{
		cout << "You need to enter a special character next time." << endl;
		return 0;
	}
	cin >> special;

	std::string input;
	int height;
	int width;
	cout << "Please enter height and width separated by a space." << endl;
	if (!cin)
	{
		cout << "You need to enter two integers." << endl;
		return 0;
	}
	getline(cin,input);
	istringstream dimensions(input);
	dimensions >> height >> width;
	for (int height2 = 1; height2 <= height; ++height)
	{
		for (int width2 = 1; width2 <= width; ++width)
		{
			cout << special;
		}
		cout << endl;
	}
}