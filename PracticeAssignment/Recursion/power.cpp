#include<iostream>
using namespace std;
int power(int n,int x)
{
	if(n==0)
	{
		return 1;
	}
	int res=power(n-1,x);
	return res*x;
}
int main()
{
	int n,x;
	cout<<"enter a number "<<endl;
	cin>>x;
	cin>>n;
	int res=power(n,x);
	cout<<res;
}

