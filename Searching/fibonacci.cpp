#include<iostream>
#include<stdlib.h>
#define MAX 5
#include<time.h>
#include<algorithm>
using namespace std;
void sort(int *num)
{
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX-1;j++)
		{
			if(num[i]>num[j])
			{
				swap(num[i],num[j]);
			}
		}
	}
}
int main()
{
	int n=MAX;
	int *num=new int[n];
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		num[i]=rand()%100;
	}
	cout<<"array elements are :";
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	sort(num);
	int x;
	cout<<"Enter elements to search :";
	cin>>x;
	int fibm1,fibm2,fibm;
	fibm2=0;
	fibm1=1;
	fibm=fibm1+fibm2;
	while(fibm<n)
	{
		fibm2=fibm1;
		fibm1=fibm;
		fibm=fibm1+fibm2;
	}
	int offset = -1;
	while(fibm>1)
	{
		int i=min(offset+fibm2,n-1);
		if(num[i]==x)
		{
			cout<<"found :";
			exit(0);
		}
		if(num[i]>x)
		{
			fibm=fibm-fibm1;
			fibm1=fibm1-fibm;
			fibm2=fibm2-fibm1;
		}
		else if(num[i]<x)
		{
			fibm=fibm1;
			fibm1=fibm2;
			fibm2=fibm-fibm1;
			offset=i;
		}
	}
	if(fibm1 && num[offset+1]==x)
	{
		cout<<"found :";
		exit(0);
	}
	cout<<"not found :";
}
