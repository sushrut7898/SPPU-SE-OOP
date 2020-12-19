/* 3162083/B1
	A book shop maintains the inventory of books that are being sold at the shop.
The list includes details such as author, title, price, publisher and stock position.
Whenever a customer wants a book, the sales person inputs the title and author
and the system searches the list and displays whether it is available or not. If it is
not, an appropriate message is displayed. If it is, then the system displays the
book details and requests for the number of copies required. If the requested
copies book details and requests for the number of copies required. If the
requested copies are available, the total cost of the requested copies is displayed;
otherwise the message ?Required copies not in stock? is displayed. Design a
system using a class called books with suitable member functions and
Constructors. Use new operator in constructors to allocate memory space
required. Implement C++ program for the system.

*/

#include<iostream>
#include<cstring>
using namespace std;

class bookshop
{
		char *name,*author,*publisher;
		int stock,price;
	public:
		bookshop();
		void create_database();
		void display();
		void search( bookshop *b[] ,int );
		
};

bookshop::bookshop()
{
	name=new char[20];
	author=new char[20];
	publisher=new char[20];
	stock=0;
	price=0;
}

void bookshop::create_database()
{
	cin.ignore();
	cout<<"Enter title"<<endl;
	cin.getline(name,20);
	cout<<"Enter author name"<<endl;
	cin.getline(author,20);
	cout<<"Enter name of publisher"<<endl;
	cin.getline(publisher,20);
	cout<<"Enter the price of book"<<endl;
	cin>>price;
	cout<<"Enter the available stock"<<endl;
	cin>>stock;
	cout<<endl<<endl;
}

void bookshop::search( bookshop  *b[100],int n )
{
	bookshop b1;
	cout<<"Enter title of book: ";
	cin>>b1.name;
	cout<<"Enter author name: ";
	cin>>b1.author;
	for(int i=0;i<n;i++)
	{
		int x;
		if( strcmp(name,b1.name) && strcmp( author, b1.author) )
		{	
			cout<<"Book is available"<<endl;
			cout<<"Enter the no. of books you want to buy"<<endl;
			cin>>x;
			if(x<(b[i]->stock))
			{
				cout<<"Book bought successfuly"<<endl;
				cout<<"Total price: "<<(x*(b[i]->price))<<endl;
				stock-=x;
				break;
			}
			else
				cout<<"Entered no. of books is unavailable"<<endl;
		}
		else
			cout<<"Book is unavailable"<<endl;
		
	}
	
}


void bookshop::display()
{
	cout<<"Title: "<<name<<endl;
	cout<<"Author name: "<<author<<endl;
	cout<<"Publisher: "<<publisher<<endl;
	cout<<"Price is: "<<price<<endl;
	cout<<"Available stock is: "<<stock<<endl;
}
int main()
{
	int n;
	bookshop *b[100],a;
	cout<<"Enter the no. of books"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		b[i]=new bookshop;
	}
	
	for(int i=0;i<n;i++)
	{
		b[i]->create_database();
	}
	
	a.search(b,n);

	return 0;
}
