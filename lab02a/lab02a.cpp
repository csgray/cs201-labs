// Source: lab02a/lab02a.cpp
// Author: Corey Gray
// Date: 20160902
// Purpose: Takes an integer provided by the user and returns the square of the next integer

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please type an integer." << endl;
	int num;
	cin >> num;
	int square;
	square = (num + 1) * (num + 1);
	cout << "You entered " << num << " and the square of the next integer is " << square << "." << endl;
}
