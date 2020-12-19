/* 3162083/B1
	Write a C++ program that creates an output file, writes information to it, closes
the file and open it again as an input file and read the information from the file.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void create()
{
	ofstream outfile("Test.txt", ios::app);
	string write;
	cout << "File has been created." << endl << "What do you want to write in file?" << endl;
	cin >> write;
	if (outfile.is_open())
	{
		outfile << write;
		outfile.close();
	}
	outfile.close();
}

void read()
{
	string temp;
	ifstream infile("Test.txt");
	while (getline(infile, temp))
	{
		infile >> temp;
		cout << temp;
	}
	infile.close();
}
int main()
{
	int a;
	char ans;
	do
	{
		cout << "Which operation will you like to perform ?" << endl << "1. Create file" << endl;
		cout << "2. Read information from file" << endl;
		cout << "Enter your choice: ";
		cin >> a;
		switch (a)
		{
		case 1:
			create();
			break;
		case 2:
			read();
			break;
		}
		cout << "Do you wish to continue?" << endl;
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	return 0;
}
