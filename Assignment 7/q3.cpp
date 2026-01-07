//Q3.Define recursive code to create an array of n integers.
//Define recursive search t o search a number in array.
#include<iostream>
using namespace std;
void create(int *p,int ind)
{
	if(ind==-1)
	{
		return;
	}
	else
	{
		create(p,ind-1);
		cout<<"Enter array elements "<<endl;
		cin>>*(p+ind);
	}
	
}
void show(int *p,int ind)
{
	if(ind==-1)
	{
		return;
	}
	else
	{
		show(p,ind-1);
		cout<<"array elements "<<*(p+ind)<<endl;
	}
}
int search(int *p,int ind,int val)
{
	if(*(p+ind)==val)
	{
		return 1;
	}
	if(ind==-1)
	{
		return 0;
	}
	else
	{
		int res=search(p,ind-1,val);
		return res;
	}
}
int main()
{
	int n;
	cout<<"enter number of elements you want "<<endl;
	cin>>n;
	int *p;
	p=new int[n];
	create(p,n-1);
	show(p,n-1);
	cout<<"Enter value to be search "<<endl;
	int x;
	cin>>x;
	int res=search(p,n-1,x);
	if(res==1)
	{
		cout<<"Element found "<<endl;
		
	}
	else
	{
		cout<<"Not found "<<endl;
	}
	
}
