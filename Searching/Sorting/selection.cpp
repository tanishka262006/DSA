#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 100000
using namespace std;
int main()
{
	int *num;
	num=new int[MAX];
	srand(time(NULL));
//	for(int i=0;i<MAX;i++)
//	{
//		num[i]=rand()%100;
//	}
	for(int i=0;i<MAX;i++)
	{
		num[i]=i*2;
	}
	
	for(int i=0;i<MAX;i++)
	{
		for(int j=i+1;j<MAX;j++)
		{
			if(num[i]>num[j])
			{
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
//	for(int i=0;i<MAX;i++)
//	{
//		cout<<num[i]<<" ";
//	}
	
}
