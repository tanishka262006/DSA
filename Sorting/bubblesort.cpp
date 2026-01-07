#include<iostream>
#define MAX 5
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int *num;
	num = new int[MAX];
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		num[i]=rand()%10;
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	for(int i=0;i<MAX-1;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			if(num[j]>num[j+1])
			{
				int temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	cout<<"after sorting";
	for(int i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	
}
