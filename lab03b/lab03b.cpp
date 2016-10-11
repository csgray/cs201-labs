// Source: lab03b/lab03b.cpp
// Author: Corey Gray
// Date: 20160907
// Purpose: Asks the user for their full name then prints that name

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

int main()
{
	cout << "Please enter your full name." << endl;
	string name;
	getline(cin, name);
	cout << "Your name is: " << name << endl;;
}