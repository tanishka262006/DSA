//add digits and addition 
#include<iostream>
using namespace std;
int add(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		int res=add(num/10);
		return res+num%10;
		
	}
}
int main()
{
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;
	int res=add(num);
	cout<<"Addition of digits is "<<res<<endl;
}
