#include<iostream>
#include<stdlib.h>
using namespace std;

#define MAX 4
int partition(int *num,int low,int up);
void merge(int *num,int low,int mid,int up);
void selectionsort(int *num)
{
	int i,j,swap;
	for(i=0;i<=MAX-1;i++)
	{
		for(j=i+1;j<=MAX-1;j++)
		{
			if(num[i]>num[j])
			{
				swap=num[i];
				num[i]=num[j];
				num[j]=swap;
			}
		}
	}
}

void bubblesort(int *num)
{
	int i,j,swap;
	for(i=0;i<MAX-1;i++)
	{
		for(j=0;j<MAX-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				swap=num[j];
				num[j]=num[j+1];
				num[j+1]=swap;
			}
		}
	}
}

void insertionsort(int *num)
{
	int i,j,temp;
	for(i=0;i<=MAX-1;i++)
	{
		temp=num[i];
		for(j=i-1;num[j]>=temp && j>=0;j--)
		{
			num[j+1]=num[j];
		}
		num[j+1]=temp;
	}
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

int partition(int *num,int low,int up)
{
	int p,q,pivot,swap;
	pivot=num[low];
	p=low+1;
	q=up;
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
			swap=num[p];
			num[p]=num[q];
			num[q]=swap;
		}
		else
		{
			break;
		}
	}
	
	swap=num[low];
	num[low]=num[q];
	num[q]=swap;
	
	return q;
}

void mergesort(int *num,int low,int up)
{
	if(low>=up)
	{
		return;
	}
	else
	{
		int k=(low+up)/2;
		
		mergesort(num,low,k);
		mergesort(num,k+1,up);
		merge(num,low,k,up);
	}
}

void merge(int *num,int low,int mid,int up)
{
	int *temp=new int[up-low+1];
	int i,j,k;
	i=low;
	j=mid+1;
	k=0;
	
	while(i<=mid && j<=up)
	{
		if(num[i]<num[j])
		{
			temp[k]=num[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=num[j];
			k++;
			j++;
		}
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
	for(k=low;k<=up;k++)
	{
		num[k]=temp[j];
		j++;
	}
	
	delete [] temp;
}

int main()
{
	int *num=new int[MAX];
	int i;
	for(i=0;i<=MAX-1;i++)
	{
		cin>>num[i];
	}
	//selectionsort(num);
	bubblesort(num);
	//insertionsort(num);
	//quicksort(num,0,MAX-1);
	//mergesort(num,0,MAX-1);
	for(i=0;i<=MAX-1;i++)
	{
		cout<<num[i]<<" ";
	}
}
