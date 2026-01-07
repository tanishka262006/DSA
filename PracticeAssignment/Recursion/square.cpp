//keep scanning number until user enters 0,print square of each
#include<iostream>
using namespace std;
void square(int x)
{
	if(x==0)
	{
		return ;
	}
	else
	{
		cout<<"Square of "<<x<<" is "<< x*x<<endl;
		square(x-1);	
	}
}
int main()
{
	int x;
	cout<<"Enter a number ";
	cin>>x;
	square(x);
}

