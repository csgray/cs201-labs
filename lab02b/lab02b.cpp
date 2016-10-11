// Source: lab02b/lab02b.cpp
// Author: Corey Gray
// Date: 20160902
// Purpose: Asks the user for the month, day, and year of their birthday and returns the formatted date

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please type your birth month as an integer." << endl;
	int month;
	cin >> month;
	cout << "Please type your birth day as an integer." << endl;
	int day;
	cin >> day;
	cout << "Please type your birth year as an integer." << endl;
	int year;
	cin >> year;

	cout << "Your birthday is " << month << "/" << day << "/" << year << "." << endl;
}
