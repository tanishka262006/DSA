//Create an array of n integers.Print addition of only even values in array.
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
int addeven(int *arr,int n)
{
	if(n==-1)
	{
		return 0;
	}
	else
	{
		int res=addeven(arr,n-1);
		if(*(arr+n)%2==0)
		{
			res=res+*(arr+n);
			return res;
		}
	}
}
int main()
{
	int *p;
	int n;
	cout<<"Number of elements in array "<<endl;
	cin>>n;
	p=new int[n];
	scanrec(p,n-1);
	int add=addeven(p,n-1);
	cout<<"Addition is "<<add<<endl;
}

