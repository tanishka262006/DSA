//Declare an array of 6 integers.Print addition of all integers in array.
#include<iostream>
using namespace std;
void scanrec(int *arr,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		cout<<"Enter a number "<<endl;
		cin>>*(arr+n);
		scanrec(arr,n-1);
	}
}
int add(int *arr,int n)
{
	if(n==-1)
	{
		return 0;
	}
	else
	{
		int res=add(arr,n-1);
		return res+*(arr+n);
		
	}
}
int main()
{
	int arr[6];
	scanrec(arr,5);
	int addi=add(arr,5);
	cout<<"Addition is "<<addi<<endl;
	
}
