/* 3162083 / B1
	Write a function in C++ to count and display the number of lines not starting
with alphabet 'A' present in a text file "STORY.TXT"
Example:
If the file "STORY.TXT" contains the following lines
The roses are red.
A girl is playing there.
There is a playground.
An aeroplane is in the sky.
Numbers are not allowed in the password.
The function should display the output as 3
*/

#include <cstdlib>
#include<string>
#include <fstream>
#include<string>
#include <iostream>
using namespace std;
int find()
{
	string str, temp;
	int count = 0,flag=0;
	fstream file("STORY.txt");
	while (getline(file, temp))
	{
		flag = 1;
		if (temp[0] != 'A')
		{
			count++;
		}
	}
	return count;
	
}
int main()
{
	int a = find();
	cout << "No. of lines not starting with A are: " << a<<endl;
	return 0;
}
