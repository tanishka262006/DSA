#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 5
using namespace std;
void insertion(int *num)
{
	int temp,i,j;
	for(i=1;i<MAX;i++)
	{
		temp=num[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<=num[j])
			{
				num[j+1]=num[j];
			}
			
		
		}
		num[j+1]=temp;
	}
}
int main()
{
	int *n;
	n=new int[MAX];
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		n[i]=rand()%10;
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<n[i]<<" ";
	}
	cout<<"After sorting :";
	insertion(n);
	for(int i=0;i<MAX;i++)
	{
		cout<<n[i]<<" ";
	}
}
