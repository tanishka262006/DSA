#include<iostream>
#include<stdlib.h>
#define MAX 100000
#include<time.h>
using namespace std;
int main()
{
	int i,j;
	int *num;
	num=new int[MAX];
	
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
	for(i=0;i<MAX-1;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(num[j]>num[j+1])
			{
				int temp=num[j];
				
				num[j]=num[j+1];
				num[j+1]=temp;
				
			}
		}
	}
//	for(int i=0;i<MAX;i++)
//	{
//		cout<<num[i]<<" ";
//	}
}
