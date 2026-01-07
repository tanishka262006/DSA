#include<iostream>
using namespace std;

int add();
int main()
{
	int sum;
	sum=add();
	cout<<"Sum : "<<sum;
	
	return 0;
}

int add()
{
	int num;
	cout<<"Enter Number :(Enter 0 to stop ) ";
	cin>>num;
	if(num==0)
	{
		return 0;
	}
	else
	{
		int res;
		res=add();
		return res+num;
	}
}
