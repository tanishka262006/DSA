//Print addition of first n natural numbers recursively.
#include<iostream>
using namespace std;
int print(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		int res;
		res=print(n-1);
		return res+n;
	}
}
int main()
{
	int n;
	cout<<"Enter  a number "<<endl;
	cin>>n;
	int res=print(n);
	cout<<"Addition of first "<<n<<" integers is "<<res<<endl;
}
