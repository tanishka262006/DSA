#include<iostream>
#include<stdlib.h>
#define MAX 10

#include<time.h>
using namespace std;
void create(int *num)
{
	
	srand(time(NULL));
	int i;
	for(i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
}
void print(int *num)
{
	int i;
	cout<<"\nArray elements are :"<<endl;
	for(i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
}
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
	swap(num[low],num[q]);
	return q;
	
}
void quicksort(int *num,int low,int up)
{
	if(low>=up)
	{
		return;
	}
	int k=partition(num,low,up);
	quicksort(num,low,k-1);
	quicksort(num,k+1,up);
	
}
int main()
{
	int *num;
	num=new int[MAX];
	create(num);
	print(num);
	quicksort(num,0,MAX-1);
	print(num);
}
