#include<iostream>
#define MAX 10
using namespace std;
void merge(int *num,int low,int mid,int up)
{
	int *temp=new int[up-low+1];
	int i=low;
	j=mid+1;
	k=0;
	while(i<=mid && j<=up)
	{
		if(num[i]>num[j])
		{
			temp[k]=num[j];
			k++;
			j++;
		}
		if(num[i]<num[j])
		{
			temp[k]=num[j];
			k++;
			i++;
		}
	}
	while(i<=mid)
	{
		temp[k]=num[j];
		k++;
		i++;
		
	}
	while(j<=up)
	{
		temp[k]=num[j];
		k++;
		j++;
	
	}
}
void mergeSort()
{
	if(low>=up)
	{
		return;
	}
	else
	{
		mergeSort(num,low,mid);
		mergeSort(num,mid+1,up);
		merge(num,low,mid,up);
		
	}
}
int main()
{
	int *num=new int[MAX];
	for(int i=0;i<MAX;i++)
	{
		num[i]=i*8;
	}
	mergeSort(num,0,MAX-1);
}
