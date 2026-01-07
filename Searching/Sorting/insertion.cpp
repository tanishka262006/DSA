#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 100000
using namespace std;
int main()
{
	int i,j;
	int *num;
	int temp;
	num=new int [MAX];
//	for(int i=0;i<MAX;i++)
//	{
//		num[i]=i*2;
//	}
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
	for(i=0;i<MAX;i++)
	{
		temp=num[i];
		
		for(j=i-1;j>=0 && num[j]>temp;j--)
		{
			
				num[j+1]=num[j];
			
			
		}
		num[j+1]=temp;
	}
//	for(int i=0;i<MAX;i++)
//	{
//		cout<<num[i]<<" ";
//	}
}
