#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 10
using namespace std;
void downadjust(int *heap,int i)
{
	int n=heap[0];
	while(2*i<=n)
	{
		int j=2*i;
		if(j+1<=n)
		{
			if(heap[j]<heap[j+1])
			{
				j=j+1;
			}
			//j is index of largest child
			
		}
		if(heap[j]>heap[i])
		{
			swap(heap[i],heap[j]);
			i=j;
		}
		else
		{
			break;
		}	
	}
	
}
int main()
{
	
	int n=MAX;
	int *heap=new int[n+1];
	srand(time(NULL));
	heap[0]=n;
	for(int i=1;i<=n;i++)
	{
		heap[i]=rand()%100;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
	for(int k=n/2;k>=1;k--)
	{
		downadjust(heap,k);
	}
	while(heap[0]>1)
	{
		int lastind=heap[0];
		swap(heap[1],heap[lastind]);
//		int temp=heap[1];
//		heap[1]=heap[lastind];
//		heap[lastind]=temp;
		heap[0]--;
		downadjust(heap,1);
	}
	heap[0]=n;
	cout<<"\nAfter sorted :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
	
}
