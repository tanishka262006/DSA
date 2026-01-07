#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 5
using namespace std;
int main()
{
	int *num;
	num=new int[MAX];
	srand(time(NULL));
	int x;
	for(int i=0;i<MAX;i++)
	{
		num[i]=rand()%MAX;
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<"\nEnter element to search ";
cin>>x;
	for(int i=0;i<MAX;i++)
	{
		if(num[i]==x)
		{
			cout<<"\nFOUND ";
		}
		
	}
}
