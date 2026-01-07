//5.Print all values of array of 6 integers.
#include<iostream>
using namespace std;
void print(int *p,int n)
{
	if(n==-1)
	{
		return;
	}
	
	print(p,n-1);
	cout<<"Array elements are "<<*(p+n)<<endl;
	
}
int main()
{
	int num[6];
	cout<<"Enter array elements "<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>num[i];
	}
	print(num,5);
	
}

