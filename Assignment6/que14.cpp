//Scan n integers from user in an array.Print this array in reverse order.
//Define recursive scan() and print() functions here.

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
		cout<<"Array elements are "<<*(arr+n)<<endl;
		printrec(arr,n-1);
		
	}
}
int main()
{
	int arr[6];
	scanrec(arr,5);
	printrec(arr,5);
}

