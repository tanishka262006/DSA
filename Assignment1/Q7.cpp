/*7.Scan 6 integers in an array.Define function addition() to find addition of all the integers.
Print result in main().

*/
#include<iostream>
using namespace std;
int addition(int *arr)
{
	int sum=0;
	int i;
	for(i=0;i<6;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int arr[6];
	int max;
	int i=0;
	cout<<"enter 6 integers ";
	for(i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	int sum=addition(&arr[0]);
	cout<<"sum is "<<sum;

}

