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
	cout<<"after sorting";
	for(int i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	
}
