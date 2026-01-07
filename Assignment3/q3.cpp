//.WAP to scan n integers from user.Store them in array.Print addition of only even numbers from array.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no.of elemnts you want ";
		cin>>n;
	int arr[n];
	

	int sum=0;
	int i;
	cout<<"Enter array elements ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			sum=sum+arr[i];
		}
	}
	cout<<"Sum of even array elemts is "<<sum;
}

