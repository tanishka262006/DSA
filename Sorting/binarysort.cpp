#include<iostream>
#define MAX 5
#include<stdlib.h>
using namespace std;
void binary(int *num,int key)
{
	int low=0;
	int mid=num[0];
	int up=MAX-1;
	while(low<=up)
	{
		mid=(low+up)/2;
		if (num[mid] == key) 
		{
            cout<<"found :";
            break;
        }
		if(num[mid]>key)
		{
			up=mid-1;
		}
		else if(num[mid]<key)
		{
			low=mid+1;
		}
		
	}
	if(num[mid]!=key)
	{
		cout<<"not found";
	}
	
}

int main()
{
	int *num;
	num=new int[MAX];
//	srand(time(NULL));
	cout<<"Enter array elements :";
	for(int i=0;i<MAX;i++)
	{
		cin>>num[i];
	}
	binary(num,8);
}
