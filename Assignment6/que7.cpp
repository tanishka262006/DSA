//Print addition of 1 to 5 numbers.
#include<iostream>
using namespace std;
int add(int x)
{
	if(x==6)
	{
		return 0;
	}
	else
	{
		int res;
		res=add(x+1);
		return res+x;
		
	}
}
int main()
{
//	int n;
//	couT<<"Enter a "
	int res=add(1);
	cout<<"Addition of 1 to 5 is "<<res<<endl;
}
