#include<iostream>
using namespace std;
int change(int &m)
{
	m=24;
	return 20;
}
int main()
{
	int a = 5, b = 10;
	cout<<"\na = "<<a;  //5
	cout<<"\nb = "<<b;	//10
	a = change(b);
	cout<<"\na = "<<a;	//20
	cout<<"\nb = "<<b;	//24
 	return 0;
}

