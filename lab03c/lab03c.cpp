// Source: lab03c/lab03c.cpp
// Author: Corey Gray
// Date: 20160902
// Purpose: Asks the user for three integers, separated by spaces, then adds them

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please enter three integers separated by spaces." << endl;
	int num1;
	int num2; 
	int num3;
	cin >> num1 >> num2 >> num3;
	cout << "The sum is " << num1 + num2 + num3 << endl;
}