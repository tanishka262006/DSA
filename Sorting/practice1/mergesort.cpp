#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 10
using namespace std;
void merge(int *heap,int low,int up,int mid)
{
	int i,j,k;
	i=low;
	j=mid+1;
	k=0;
	int *temp=new int[up-low+1];
	while(i<=mid && j<=up)
	{
		if(heap[i]<heap[j])
		{
			temp[k]=heap[i];
			i++;
			k++;	
		}
		else
		{
			temp[k]=heap[j];
			j++;
			k++;
		}
		
	}
	while(i<=mid)
	{
	
		temp[k]=heap[i];
		i++;	
		k++;
	}
	while(j<=up)
	{
	
		temp[k]=heap[j];
		j++;
		k++;	
		
	}
	int f=0;
	for(int k=low;k<=up;k++)
	{
		heap[k]=temp[f];
		f++;
	}
}
void mergesort(int *heap,int low,int up)
{
	if(low>=up)
	{
		return;
	}
	else
	{
		int mid=(low+up)/2;
		mergesort(heap,low,mid);
		mergesort(heap,mid+1,up);
		merge(heap,low,up,mid);
	}
	
}
int main()
{
	int *heap;
	heap=new int [MAX];
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		heap[i]=rand()%MAX;
	}
	
	mergesort(heap,0,MAX-1);
	cout<<"sorted array is :"<<endl;
	for(int i=0;i<MAX;i++)
	{
		cout<<heap[i]<<" ";
	}
	
}
