/* 3162083/B1
	Write C++ Program with base class convert declares two variables, val1 and
val2, which hold the initial and converted values, respectively. It also defines the
functions getinit( ) and getconv( ), which return the initial value and the
converted value. These elements of convert are fixed and applicable to all
derived classes that will inherit convert. However, the function that will actually
perform the conversion, compute( ), is a pure virtual function that must be
defined by the classes derived from convert. The specific nature of compute( )
will be determined by what type of conversion is taking place.
*/
#include<iostream>
using namespace std;

class convert
{
	protected:
		int val1,val2;
	public:
		int getinit();
		int getconv();
		virtual void compute()=0;
};

class dist:public convert
{
	public:
		void compute()
		{
			val2=val1/100;
		}
};

int convert::getinit()
{
	cout<<"Enter the value that is to be converted. "<<endl;
	cin>>val1;
	return val1;
}

int convert::getconv()
{
	return val2;
}


int main()
{
	convert * p;
	dist d;
	p=&d;
	cout<<p->getinit()<<endl;
	p->compute();
	cout<<"Converted value is: "<<p->getconv()<<endl;
	return 0;
}
