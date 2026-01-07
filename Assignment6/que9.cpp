//Find n factorial.
#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		int res;
		res=factorial(n-1);
		return res*n;
		
	}
}
int main()
{
	int n;
	cout<<"Enter a number "<<endl;
	cin>>n;
	int res=factorial(n);
	cout<<"Factorial of "<<n<<" is "<<res<<endl;
}
