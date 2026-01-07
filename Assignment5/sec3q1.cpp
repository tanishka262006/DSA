//1.Find n!.

#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	int res=factorial(n-1);
	return res*n;
}
int main()
{
	int n;
	cin>>n;
	int res=factorial(n);
	cout<<"factorial of "<<n<<" is "<<res<<endl;
}
