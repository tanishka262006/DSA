/*15.Scan a number from user.Check if it is prime or not.
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	int i;
	cin>>num;
	int count =0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime number";
	}
	else
	{
		cout<<"not prime ";
	}
}


