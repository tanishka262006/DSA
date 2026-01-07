#include<iostream>
#define MAX 20
//sentinel search 
using namespace std;

int main()
{
	int *num;
	num=new int [MAX];
	for(int i=0;i<MAX;i++)
	{
		num[i]=i*2;
	}
	int x;
	cout<<"Enter an element to search :";
	cin>>x;
	int temp=num[MAX-1];
	num[MAX-1]=x;
	int i=0;
	while(num[i]!=x)
	{
		i++;
	}
	if(i<MAX-1)
	if(num[i]==x && temp==x)
	{
		cout<<"Element found :";
	}
	else if(num[i]==x && temp!=x)
	{
		cout<<"Element not found :";
	}
	
}
