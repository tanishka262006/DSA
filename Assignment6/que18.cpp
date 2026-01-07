//Scan a number from user.Find addition of digits in number.
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
		int n=num%10;
		int res=add(num/10);
		return res+n;
	}
}
int main()
{
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;
	int addi=add(num);
	cout<<"Addition is "<<addi<<endl;
}
