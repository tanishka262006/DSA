//to print first n natural number
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
	cout<<x<<endl;
	}
	
}
int main()
{
	cout<<"Enter a number \n";
	int n;
	cin>>n;
	print(n);
	
}
