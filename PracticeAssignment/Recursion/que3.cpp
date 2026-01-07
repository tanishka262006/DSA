#include<iostream>
using namespace std;
void myfun(int a,int b)
{
	if(a==b)
	{
		return;
	}
	else
	{
		cout<<a<<endl;;
		a++;
		myfun(a,b);
		cout<<a<<endl;
	}
}
int main()
{
	myfun(5,9);
}
