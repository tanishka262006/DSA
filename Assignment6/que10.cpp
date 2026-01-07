//Scan a range from user.Print addition of all integers in the range.
#include<iostream>
using namespace std;
int add(int x,int y)
{
	if(x>y)
	{
		return 0;
	}
	else
	{
		int res=add(x+1,y);
		return res+x;
	}
}
int main()
{
	int a,b;
	cout<<"Enter two integers "<<endl;
	cin>>a>>b;
	int res;
	if(a>b)
	{
		res=add(b,a);
	}
	else
	{
		res=add(a,b);
	}
	cout<<"Addition of range is "<<res<<endl;
}
