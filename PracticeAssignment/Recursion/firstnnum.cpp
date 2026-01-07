//scan range and print all numbers in that range
#include<iostream>
using namespace std;
void print(int a,int b)
{
	if(a==b)
	{
		return;
	}
	else
	{
		print(a,b+1);
		cout<<b;
	}
}
int main()
{
	int a,b;
	cout<<"Enter two numbers for range \n";
	cin>>a>>b;
	if(a>b)
	{
		print(a,b);
	}
	else
	{
		print(b,a);
	}
}
