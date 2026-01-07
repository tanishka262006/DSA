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
		cout<<x;
		
	}
}
int main()
{
	print(5);
	
}
