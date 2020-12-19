#include<iostream>
using namespace std;

class type
{
	private:
		int a , b;
		
	public:
		type()
		{
			a=0;
			b=0;
		}
		type(int x,int y)
		{
			a=x;
			b=y;
		}
		~type()
		{
			cout<<"Destructor"<<endl;
		}
};

int main()
{
	type t;
	t(10,20);
	cout<<"Value of a"<<t.a<<endl<<" Value of b"<<t.b<<endl;
	
}
