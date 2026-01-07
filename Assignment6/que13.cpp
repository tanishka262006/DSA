//13.Declare an array of 6 integers.Scan and print this array using recursive scan()
//and print() function.
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
void printrec(int *arr,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		
		printrec(arr,n-1);
		cout<<"Array elements are "<<*(arr+n)<<endl;
	}
}
int main()
{
	int arr[6];
	scanrec(arr,5);
	printrec(arr,5);
}

