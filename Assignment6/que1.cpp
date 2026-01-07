//.Print first n natural numbers.
#include<iostream>
using namespace std;
void print(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		print(x-1);
		cout<<x<<" "<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter a number "<<endl;
	cin>>n;
	print(n);
}
