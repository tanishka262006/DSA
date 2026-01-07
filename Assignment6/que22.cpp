//22.Define a recursive isPrime() function to check if given number is prime or not.
#include<iostream>
using namespace std;
//bool is_Prime(int num)
//{
//	for(int i=2;i<=num-1;i++)
//	{
//		if(num%i==0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}
bool isPrime(int num,int i);
int main()
{
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;
	bool res;
	res=isPrime(num,2);
	if(res==1)
	{
		cout<<"Number is prime "<<endl;
	}
	else
	{
		cout<<"Number is not prime "<<endl;
	}
}
bool isPrime(int num,int i)
{
	
	if(num==1)
	{
		return 0;
	}
	if(num%i==0)
	{
		return 0;
	}
	else
	{
		bool res=isPrime(num,i+1);
		return 1;
	}
}
