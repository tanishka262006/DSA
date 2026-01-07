#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 5
using namespace std;
int partition(int *num,int low,int up)
{
	int p,q,pivot;
	p=low+1;
	q=up;
	pivot=num[low];
	while(1)
	{
		while(p<=up && num[p]<=pivot)
		{
			p++;
		}
		while(num[q]>pivot)
		{
			q--;
		}
		if(p<q)
		{
			swap(num[p],num[q]);
		}
		else
		{
			break;
		}
	}
	swap(num[q],num[low]);
	return q;
}
void quicksort(int *num,int low,int up)
{
	if(low>=up)
	{
		return;
	}
	else
	{
		int k=partition(num,low,up);
		quicksort(num,low,k-1);
		quicksort(num,k+1,up);
	}
}
int main()
{
	int *num;
	num=new int[MAX];
	for(int i=0;i<MAX;i++)
	{
		cin>>num[i];
	}
	quicksort(num,0,MAX-1);
	for(int i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	
}
