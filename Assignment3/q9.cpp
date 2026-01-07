
#include<iostream>
using namespace std;
void scanarray(int *num)
{
	int i;
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
}
int findaddition(int* num)
{
	int i;
	int sum=0;
	for(i=0;i<6;i++)
	{
		sum=sum+num[i];
	}
	return sum;
}
int main()
{
	int num[6];
	int addition;
	//passing array to function
	scanarray(&num[0]);
	addition = findaddition(num);
	cout<<"\nAddition = "<<addition;
}


