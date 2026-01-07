//2.Print all integers from 20 to 30.
#include<iostream>
using namespace std;
void print(int x)
{
	if(x==31)
	{
		return;
	}
	else
	{
		cout<<x<<" "<<endl;
		print(x+1);
	}
}
int main()
{
	print(20);
}
