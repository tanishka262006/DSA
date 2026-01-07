//.WAP to implement Tower of Hanoi.Print all transactions and total transactions also.
#include<iostream>
using namespace std;
void TOH(int n,char S,char D,char I)
{
	if(n==0)
	{
		return;
	}
	TOH(n-1,'S','I','D');
	cout<<S<<" -> "<<D<<endl;
	TOH(n-1,'I','D','S');
}
int main()
{
	int num;
	cout<<"Enter number of discs :"<<endl;
	cin>>num;
	char S,D,I;
	TOH(num,'S','D','I');
}
