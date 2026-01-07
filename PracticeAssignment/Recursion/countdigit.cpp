#include<iostream>
using namespace std;
int count(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		int c=count(num/10);
		return c+1;
	}
}
int main()
{
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;
	int c=count(num);
	cout<<"Digits are "<<c<<endl;
}


