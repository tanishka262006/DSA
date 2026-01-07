#include<iostream>
#include<stdlib.h>
#define MAX 10
using namespace std;
int main()
{
	int *num=new int[MAX];
	int i;
	for(i=0;i<=MAX-1;i++)
	{
		//num[i]=rand()%10;
		cout<<"Enter a number :";
		cin>>num[i];
	}
	int bucketno,colno,div;
	
	int count[10];
	for(i=0;i<=MAX-1;i++)
	{
		count[i]=0;
	}
	
	int bucket[10][10];
	
	int min=num[0];
	for(i=0;i<=MAX-1;i++)
	{
		if(min>num[i])
		{
			min=num[i];
		}
	}
	int ofst=abs(min);
	int passes=0;
	int m=num[0];
	for(i=0;i<=MAX-1;i++)
	{
		if(m<num[i])
		{
			m=num[i];
		}
	}
	while(m>0)
	{
		m=m/10;
		passes++;
	}
	
	int j,k;
	for(i=0;i<=MAX-1;i++)
	{
		num[i]=num[i]+ofst;
	}
	div=1;
	while(passes>0)
	{
		for(i=0;i<=10;i++)
		{
			count[i]=0;
		}
		for(i=0;i<=MAX-1;i++)
		{
			bucketno=num[i]/div%10;
			colno=count[bucketno];
			bucket[bucketno][colno]=num[i];
			count[bucketno]++;
		}
		k=0;
		for(bucketno=0;bucketno<=9;bucketno++)
		{
			for(j=0;j<=count[bucketno]-1;j++)
			{
				num[k]=bucket[bucketno][j];
				k++;
			}
			
		}
		div=div*10;
		passes--;
	}
	for(i=0;i<=MAX-1;i++)
	{
		cout<<num[i]-ofst<<" ";
	}
}
