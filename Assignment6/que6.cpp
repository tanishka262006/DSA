//Keep scanning numbers from user until he enters 0.
//Print all the numbers he entered in reverse order.
#include<iostream>
using namespace std;
void print(int x)
{
	cout<<"Enter a number "<<endl;
	cin>>x;
	if(x==0)
	{
		return;
	}
	else
	{
		
		print(x);
		cout<<x<<" "<<endl;
	}
	
}
int main()
{
	int x;
	print(x);
}
