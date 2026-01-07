#include<iostream>
using namespace std;
void change(int & a ,int & b)
{
	a=20;
	b=24;
}

int main()
{

	int a = 5, b = 10;
	cout<<"\na = "<<a;  //5
	cout<<"\nb = "<<b;	//10
	change(a,b);
	//Here the values of a and b must be 20 and 24 after function call.
	//So you must fill up the change() function to change the values of a and b.
	cout<<"\na = "<<a;	//20
	cout<<"\nb = "<<b;	//24
 	return 0;
}

