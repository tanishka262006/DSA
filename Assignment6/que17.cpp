//Scan a number from user.Count number of digits in that number.
#include<iostream>
using namespace std;
int countd(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		int res;
		res=countd(num/10);
		return res+1;
	}
}
int main()
{
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;
	int c=countd(num);
	cout<<"Number of digit is "<<c;
}

