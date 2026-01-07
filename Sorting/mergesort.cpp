#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 5
using namespace std;
void merge(int *num,int low,int up,int mid)
{
	int i,j,k;
	i=low;
	j=mid+1;
	k=0;
	int *temp=new int[up-low+1];
	while(i <= mid && j <= up)
	{
		if(num[i] < num[j])
		{
			temp[k]=num[i];
			i++;
		}
		else
		{
			temp[k]=num[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		temp[k]=num[i];
			k++;
			i++;
	}
	while(j<=up)
	{
		temp[k]=num[j];
			k++;
			j++;
	}
	j=0;
	for(int k=low;k<=up;k++)
	{
		num[k]=temp[j];
		j++;
	}
	delete []temp;
}
void mergeSort(int *num,int low,int up)
{
	if(low>=up)
	{
		return;	
	}
	else
	{
		int mid=(low+up)/2;
		mergeSort(num,low,mid);
		mergeSort(num,mid+1,up);
		merge(num,low,up,mid);
	}
}
int main()
{
	int *num;
	num=new int[MAX];
	srand(time(NULL));
	cout<<"Enter array elements :";
	for(int i=0;i<MAX;i++)
	{
		cin>>num[i];
	}
	int low=0;
	int up= MAX - 1;
	mergeSort(num,low,up);
	for(int i=0;i<MAX;i++)
	{
		cout<<"data is :"<<*(num+i)<<" ";
	}
}
