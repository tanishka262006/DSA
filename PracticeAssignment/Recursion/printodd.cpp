#include<iostream>
using namespace std;
void print(int a,int b)
{
	if(a>b)
	{
		return;
	}
	else
	{
		if(a%2!=0)
		{
			cout<<a<<endl;
		}
		
			print(a+1,b);	
		
	}
}
int main()
{
	print(20,30);
}
