#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 10
using namespace std;
void downadjust(int *heap,int i)
{
	int n=heap[0];
	int j;
	while(2*i<=n)
	{
		j=2*i;
		if(j+1<=n)
		{
			if(heap[j]<heap[j+1])
			{
				j=j+1;
				//j is on largest child
			}
		}	
		if(heap[j]>heap[i])
		{
			swap(heap[j],heap[i]);
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
	int *heap;
	int n=MAX;
	heap=new int[n+1];
	heap[0]=n;
	srand(time(NULL));
	for(int i=1;i<=n;i++)
	{
		heap[i]=rand()%100;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
	for(int k=n/2;k>=1;k--)
	{
		downadjust(heap,k);
	}
	while(heap[0]>1)
	{
		int lastind=heap[0];
		swap(heap[lastind],heap[1]);
		heap[0]--;
		downadjust(heap,1);
	}
	heap[0]=n;
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}	
}
