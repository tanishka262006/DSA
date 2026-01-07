//2.Addition of first n natural numbers.
#include<iostream>
using namespace std;
int addition(int n)
{
	if(n==0)
	{
		return 0;
	}
	int add=addition(n-1);
	return add+n;
}
int main()
{
	int res,n;
	cout<<"Enter a number "<<endl;
	cin>>n;
	res=addition(n);
	cout<<"Addition is "<<res<<endl;
}


