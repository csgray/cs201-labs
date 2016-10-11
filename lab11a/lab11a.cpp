// lab11a.cpp
// Corey Gray
// 26 Sep 2016
//
// For CS 201 Spring 2016
// Receives an integer from the number then prints that number's square, cube, and fourth power

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

void mathWiz(int root,
			 int &squareOut,
			 int &cubeOut,
			 int &fourthOut)
{
	squareOut = root * root;
	cubeOut = squareOut * root;
	fourthOut = cubeOut * root;
}

int main()
{
	while (true)
	{
		string input;
		cout << "Enter a positive integer for the root or 0 to quit: " << endl;
		getline(cin, input);
		if (!cin)
		{
			cout << "Error in input" << endl;
			return 0;
		}

		istringstream in(input);
		int root;
		in >> root;
		if (!in)
		{
			cout << "Error in input" << endl;
			return 0;
		}
		if (root == 0)
			return 0;
		
		if (root < 1)
		{
			cout << "You must enter a positive integer." << endl;
			return 0;
		}

		int square;
		int cube;
		int fourth;

		mathWiz(root, square, cube, fourth);
		cout << root << " squared is " << square << "." << endl;
		cout << root << " cubed is " << cube << "." << endl;
		cout << root << " to the fourth power is " << fourth << "." << endl;
	}
}