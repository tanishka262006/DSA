//2.WAP to explain references in CPP.

#include<iostream>
using namespace std;
void myfun(int &data)
{
	data=10;
}
void show(int value)
{
	cout<<value<<endl;
}

int main()
{
	int data;
	cout<<"Enter value ";
	cin>>data;
	cout<<"value before reference passing ";
	show(data);
	myfun(data);
	cout<<"value after passsing "<<endl;
	show(data);
	
}
