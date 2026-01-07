//Q6.WAP to implement Tower of Hanoi.
#include<iostream>
using namespace std;
void TOH(char s,char d,char i,char n)
{
	if(n==0)
	{
		return;
	}
	TOH(s,i,d,n-1);
	cout<<s<<"-> "<<d<<endl;
	TOH(i,d,s,n-1);
}
int main()
{
	int n;
	cout<<"enter number of disscs :";
	cin>>n;
	
	TOH('s','d','i',n);
}
