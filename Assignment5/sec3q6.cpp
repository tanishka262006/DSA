//5.Print all values of array of 6 integers.
#include<iostream>
using namespace std;
int printadd(int *p,int n)
{
	if(n==-1)
	{
		return 0;
	}
	
	int res=printadd(p,n-1);
	//cout<<"Array elements are "<<*(p+n)<<endl;
	return res+*(p+n);
	
}
int main()
{
	int num[6];
	cout<<"Enter array elements "<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>num[i];
	}
	int res=printadd(num,5);
	cout<<"Additiion of all the elements is "<<res<<endl;
	
}

