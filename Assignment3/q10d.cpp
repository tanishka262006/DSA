#include<iostream>
using namespace std;
void mychange(int & p, int &q)
{
	p=20 ;
	q=24;
}
void change(int & m ,int & n)
{
	mychange(m , n);
}
int main()
{
	int a = 5, b = 10;
	cout<<"\na = "<<a;  //5
	cout<<"\nb = "<<b;	//10
	change( a , b );
	cout<<"\na = "<<a;	//20
	cout<<"\nb = "<<b;	//24
 	return 0;
}

