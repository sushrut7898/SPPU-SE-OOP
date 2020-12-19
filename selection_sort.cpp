/* 3162083/B1
	Write a function template selection Sort. Write a program that inputs, sorts and
outputs an int array and a float array.
*/

#include<iostream>
using namespace std;
template <class T>

class selection_sort
{
	int size;
	T *a;
public:
	void accept();
	void sort();
	void display();
};

template <class T>

void selection_sort <T>::accept()
{
	cout << "Enter the number of elements you wish to sort." << endl;
	cin >> size;
	a = new T[size];
	cout << "Enter the elements." << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> a[i];
	}
}

template <class T>

void selection_sort <T>::display()
{
	cout << "The elements are: ";
	for (int i = 0;i < size;i++)
		cout << a[i]<<" ";
	cout << endl;
}

template <class T>

void selection_sort<T>::sort()
{
	T temp, small;
	for (int i = 0;i < size;i++)
	{
		small = a[i];
		for (int j = (i + 1);j < size;j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int a;
	cout << "Which type of nos. do you want to sort?" << endl;
	cout << "1. Integer" << endl << "2. Float" << endl;
	cout << "Enter choice: ";
	cin >> a;
	switch (a)
	{
	case 1: selection_sort<int> S;
		S.accept();
		S.display();
		S.sort();
		S.display();
	case 2: selection_sort<float> S1;
		S1.accept();
		S1.display();
		S1.sort();
		S1.display();
	}
	return 0;
}




