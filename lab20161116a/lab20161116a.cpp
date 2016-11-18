// lab20161116a.cpp
// Corey Gray
// 16 Nov 2016
//
// For CS 201 Fall 2016
// Write & Read a Text File by completing fwriteread.cpp by Glenn G. Chappell

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <ctime>
using std::time;


// printFile
// Read text file with given name and print its contents to the standard
// output (cout).
void printFile(const string & filename)
{
	ifstream inf(filename);
	if (!inf)
	{
		cout << "Error reading " << filename << "!";
		cout << "Everything is ruined forever.";
	}

	while (true)
	{
		string line;
		getline(inf, line);
		if (!inf)
		{
			if (inf.eof())
			{
				break;
			}

			cout << "Error reading " << filename << "!";
			cout << "Everything is ruined forever.";
		}

		cout << line << endl;
	}
}


// writeFile
// Write the text file with the given name. Output involves the given
// number. Return true on success, false on failure.
//
// ********************************************************************
// DO NOT MODIFY THIS FUNCTION
// ********************************************************************
bool writeFile(const string & filename,
	int num)
{
	// Open file
	ofstream out(filename);
	if (!out)
	{
		cout << "Error writing file '" << filename << "'" << endl;
		return false;
	}

	// Write file
	out << "The magic number is: " << num << endl;
	for (int i = 1; i <= 1 + (num % 4); ++i)
	{
		out << "Howdy      #" << i << endl;
		if (!out)
		{
			cout << "Error writing file '" << filename << "'" << endl;
			return false;
		}
	}
	out << "Last line of file";
	if (!out)
	{
		cout << "Error writing file '" << filename << "'" << endl;
		return false;
	}

	return true;  // File successfully written
}


// Main program
// Call writeFile & printFile for 2 different filenames.
//
// ********************************************************************
// DO NOT MODIFY THIS FUNCTION
// ********************************************************************
int main()
{
	bool success;  // Holds result of file-write attempt

				   // Filenames to use
	string fname1 = "f1.txt";
	string fname2 = "f2.txt";

	// Number to send to writeFile
	int num = int(time(nullptr)) % 100 + 1;

	// Write & read file #1
	cout << "Writing file '" << fname1 << "'" << endl;
	success = writeFile(fname1, num);
	if (success)
	{
		cout << "Reading file '" << fname1 << "'" << endl;
		cout << "File Contents:" << endl;
		cout << "----------------------------------------" << endl;
		printFile(fname1);
		cout << "----------------------------------------" << endl;
	}
	cout << endl;

	// Write & read file #2
	cout << "Writing file '" << fname2 << "'" << endl;
	success = writeFile(fname2, num + 1);
	{
		cout << "Reading file '" << fname2 << "'" << endl;
		cout << "File Contents:" << endl;
		cout << "----------------------------------------" << endl;
		printFile(fname2);
		cout << "----------------------------------------" << endl;
	}
	cout << endl;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}

