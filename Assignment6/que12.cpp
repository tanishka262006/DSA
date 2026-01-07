//Declare and initialize an array of 6 integers.Print this array using recursive function.
#include<iostream>
using namespace std;
void printrec(int *arr,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		
		printrec(arr,n-1);
		cout<<*(arr+n)<<endl;
	}
}
int main()
{
	int arr[6]={3,5,7,3,27,7};
	printrec(arr,5);
}
