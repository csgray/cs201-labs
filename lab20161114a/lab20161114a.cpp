// lab20161114a.cpp
// Corey Gray
// 14 Nov 2016
//
// Randomly generates ten double values between 0.0 and 1.0
// For CS 201 Fall 2016

#include <iostream>
using std::cout;
using std::endl;
#include <random>
using std::mt19937;
using std::random_device;
using std::uniform_real_distribution;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double> range(0.0, 1.0);

	for (int i = 0; i < 10; ++i)
	{
		double num = range(gen);
		cout << num << endl;
	}
}