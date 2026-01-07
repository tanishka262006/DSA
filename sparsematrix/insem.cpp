#include<iostream>
using namespace std;
int main()
{
	int *num;
	num=new int[11];
	cout<<"enter array eleemnts :";
	for(int i=0;i<11;i++)
	{
		cin>>num[i];
	}
	int freq=0;
	int arr[10];
	int k=0;
	for(int i=0;i<11;i++)
	{
		if(num[i]==10)
		{
			
			freq++;
			arr[k]=i;
			k++;
		}
	}
	cout<<"occurance of 10 is "<<freq;
	for(int i=0;i<freq;i++)
	{
		cout<<"indices are :"<<arr[i]<<" ";
	}
}
