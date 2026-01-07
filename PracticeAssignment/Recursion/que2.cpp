#include<iostream>
using namespace std;
void myfun(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		cout<<x;
		myfun(x-1);
		cout<<"\nAfter backtracking "<<endl;
		cout<<x<<endl;
	}
}
int main()
{
	myfun(5);
}
