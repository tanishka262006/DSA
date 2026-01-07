#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 5
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
				
			}
			
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
	int *heap;
	int n=MAX;
	heap=new int [n+1];
	srand(time(NULL));
	for(int i=1;i<=n;i++)
	{
		heap[i]=rand()%MAX;
	}
	
	int k;
	for(k=n/2;k>=0;k--)
	{
		downadjust(heap,k);
	}
	while(heap[0]>1)
	{
		int lastind=heap[0];
		swap(heap[1],heap[lastind]);
		heap[0]--;
		downadjust(heap,1);
	}
	heap[0]=n;
	cout<<"sorted array is :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
	

}
