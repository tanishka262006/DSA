#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 10 //MACRO
using namespace std;
void create(int *num)
{
	srand(time(NULL));
	int i;
	for(i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
}
void print(int *num)
{
	int i;
	cout<<"\nArray elements are :"<<endl;
	for(i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
}
void bubblesort(int *num)
{
	int i,j;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				swap(num[j],num[j+1]);
			}
		}
	}
}
int main()
{
	int i,j;
	int *num;
	num=new int[MAX];//dynamic memory allocation
	create(num);
	print(num);
	bubblesort(num);
	print(num);
	
	
}
