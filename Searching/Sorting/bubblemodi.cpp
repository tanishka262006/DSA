#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 100000
using namespace std;
int main()
{
	int i,j;
	int *num;
	num=new int[MAX];
	
	srand(time(NULL));
	for(i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
	int flag=1;
	for(i=1;i<MAX && flag==1;i++)
	{
		flag=0;
		for(j=0;j<=MAX-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				int temp;
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				flag =1;
			}
			if(flag==0)
			{
				break;
			}
		}
	}
//	for(int i=0;i<MAX;i++)
//	{
//		cout<<num[i]<<" ";
//	}
//	
}

