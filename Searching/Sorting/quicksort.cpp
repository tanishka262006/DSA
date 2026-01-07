#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 100000
using namespace std;
int partition(int *num,int low,int up)
{
	int p,q,pivot,temp;
	p=low+1;
	q=up;
	pivot=num[low];
	while(1)
	{
		while(p<=up && num[p]<=pivot)
		{
			p++;
		}
		while(num[q] > pivot)
		{
			q--;
		}
		if(p<q)
		{
			temp=num[p];
			num[p]=num[q];
			num[q]=temp;
		}
		else
		{
			break;
		}
		
	}
		temp=num[low];
		num[low]=num[q];
		num[q]=temp;
		return q;
}
void QuickSort(int *num,int low,int up)
{
	if(low>=up)
	{
		return;
	}
	int k=partition(num,low,up);
	QuickSort(num,low,k-1);
	QuickSort(num,k+1,up);
}

int main()
{
	int *num;
	num=new int[MAX];
	int i,j;
	srand(time(NULL));
	for(i=MAX-1;i>=0;i--)
	{
		num[i]=rand()%100;
	}
	int low=0;
	int up=MAX-1;
	//partition(num,low,up);
	QuickSort(num,low,up);
//	for(i=0;i<MAX;i++)
//	{
//		cout<<num[i]<<" ";
//	}
}
