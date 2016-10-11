// labo6a/Source.cpp
// Corey Gray
// 16 Sep 2016
//
// For CS 201 Spring 2016
// Requests a filename, word, and duplication number from a user then writes a file with those parameters

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ofstream;

int main()
{
	string filename;
	cout << "What is your file called?" << endl;
	getline(cin, filename);
	if (!cin)
	{
		cout << "Error in input" << endl;
		return 0;
	}

	string word;
	cout << "What do you want to write to the file?" << endl;
	getline(cin, word);
	if (!cin)
	{
		cout << "Error in input" << endl;
		return 0;
	}

	string duplication;
	cout << "How many times do you want to write it? Input a positive integer." << endl;
	getline(cin, duplication);
	if (!cin)
	{
		cout << "Error in input" << endl;
		return 0;
	}

	istringstream in(duplication);
	int n;  // Integer to input from line
	in >> n;
	if (!in)
	{
		cout << "Error in input" << endl;
		return 0;
	}
	if (n < 1)
	{
		cout << "You must enter a positive integer." << endl;
		return 0;
	}

	ofstream dupefile;
	dupefile.open(filename + ".txt");
	for (int i = 0; i < n; ++i)
	{
		dupefile << word << endl;
	}
	dupefile.close();
	return 0;
}