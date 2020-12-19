/* 3162083/B1
	Crete User defined exception to check the following conditions and throw the
exception if the criterion does not met.
a. User has age between 18 and 55
b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/ Mumbai/ Bangalore / Chennai
d. User has 4-wheeler
Accept age, Income, City, Vehicle from the user and check for the conditions
mentioned above. If any of the condition not met then throw the exception
*/

#include<iostream>
#include<cstring>
using namespace std;

class exceptions
{
		int age,wheel;
		long income;
		char name[20];
	public:
		void accept();
		void display();
};

void exceptions::accept()
{	
	int flag=0,x=0;
	try
	{
		cout<<"Enter age"<<endl;
		cin>>age;
		if(age>55||age<18)
			throw "Age";
		cout<<"Enter income"<<endl;
		cin>>income;
		if(income>100000||income<50000)
			throw 1.1;
		cout<<"Enter city"<<endl;
		cin>>name;
		if(strcmp(name,"Pune")==0||strcmp(name,"Chennai")==0||strcmp(name,"Mumbai")==0||strcmp(name,"Banglore")==0)
			x=1;
		else if(x==0)
			throw 'a';
		cout<<"Vehicle type: 4 wheels or 2 wheels?"<<endl;
		cin>>wheel;
		if(wheel!=4)
			throw 1;
	}
	catch(const char* a)
	{
		cout<<"Age entered is invalid"<<endl;
		flag=1;
	}
	catch(float f)
	{
		cout<<"Value entered invalid"<<endl;
		flag=1;
	}
	catch(char b)
	{
		cout<<"City entered is invalid"<<endl;
		flag=1;
	}
	catch(int i)
	{
		cout<<"Vehicle type is invalid"<<endl;
		flag=1;
	}
	catch(...)
	{
		cout<<"Invalid input"<<endl;
		flag=1;
	}
	if(flag==1)
		accept();
	else if(flag==0)
		display();
}

void exceptions::display()
{
	cout<<endl<<endl<<"Age is: "<<age<<endl;
	cout<<"Income is: "<<income<<endl;
	cout<<"City is: "<<name<<endl;
	cout<<"Vehicle is: "<<wheel<<" wheels"<<endl;
}

int main()
{
	exceptions e;
	e.accept();
	
	return 0;
}
