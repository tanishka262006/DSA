#include<iostream>
using namespace std;
void print(int x)
{
	if(x<6)
	{
		cout<<x;
		print(x+1);
		
	}
	else
	{
		return;
	}
}
int main()
{
	print(1);
}

