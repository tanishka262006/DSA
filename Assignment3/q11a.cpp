#include<iostream>
using namespace std;
int *createstorage(int n)
{
	int *p=new int[n];
	
}
void scandata(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
}
void printdata(int *p,int n)
{
	cout<<"array elements are ";
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<endl;
	}
}
int main()
{
	cout<<"\nHow many integers you want to store?";
	int n;
	cin>>n;
	int * p ;
	p = createstorage(n);
	scandata(p,n);
	printdata(p,n);
	//Do not change main() function here..
}

