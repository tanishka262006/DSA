//4.Scan a range from user and print all numbers in the range.
#include<iostream>
using namespace std;
int print(int a,int b)
{
	if(a>b)
	{
		return 0;
	}
	int res=print(a+1,b);
	return res+a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int res;
	if(a>b)
	{
		res=print(b,a);
	}
	else
	{
		res=print(a,b);
	}
	cout<<"Addition is "<<res;
	
}
