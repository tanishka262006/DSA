#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int n)
{
	int i;
	for(i=2;i<=sqrt(n)/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n = 10000;
	int i=0;
	
	int num = 2;
	while(1)
	{
		if(isPrime(num)==1)
		{
			i++;
		}
		if(i==n)
		{
			cout<<"\nPrime no : "<<num;
			break;
		}
		num++;
	}
 	return 0;
}
