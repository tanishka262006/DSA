//binary search 
#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 5
using namespace std;
void sort(int *num)
{
	int temp;
	for(int i=1;i<=MAX;i++)
	{
		temp=num[i];
		
	}
}
int main()
{
	
	int *num;
	num=new int[MAX];
	srand(time(NULL));
//	cout<<"Enter array elements :";
	for(int i=0;i<MAX;i++)
	{
		num[i]=rand()%MAX;
	}
	sort(num);
	int low=0;
	int up= MAX - 1;
	//mergeSort(num,low,up);
	int mid;
	int x;
	cout<<"Enter number to search :";
	cin>>x;
	
	while(low<=up)
	{
		mid=(low+up)/2;
		if(num[mid]==x)
		{
			cout<<"found :";
			break;
		}
		if(num[mid]>x)
		{
			
			up=mid-1;
			
		}
		if(num[mid]>x)
		{
			low=mid+1;
		}
	}
	if(num[mid]!=x)
	{
		cout<<"not found :";
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<"data is :"<<*(num+i)<<" ";
	}
	
}

