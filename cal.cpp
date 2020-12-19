/*	3162083/B1
	Write a C++ program create a calculator for an arithmetic operator (+, -, *, /).
The program should take two operands from user and performs the operation on
those two operands depending upon the operator entered by user. Use a switch
statement to select the operation. Finally, display the result.
Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/

#include<iostream>
using namespace std;
class calculator
{
 int a,b,result;
 char op;
 public:
 void accept()
 {
  cout<<"enter the number and the operator";
  cin>>a>>op>>b;
 }
 void calculate()
 {
  switch(op)
   {
     case'+':
       result=a+b;
       cout<<result;
       break;
     case'-':
       result=a-b;
       cout<<result;
       break;
     case'*':
       result=a*b;
       cout<<result;
       break;
     case'/':
       if(b==0)
       cout<<"not defined";
       else
       result=a/b;
       cout<<result;
       break;
      default:
       cout<<"invalid operation";
       break;
    }
   }
 };
 int main()
 {
  calculator c;
  c.accept();
  c.calculate();
  return 0;
 }   
