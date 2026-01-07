//For following main() function,scan 3 integers from user.
//Print addition of 3 integers.Do not declare any variable of your own.
#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int[3];
	int i;
	int sum=0;
	for(i=0;i<3;i++)
	{
		cin>>*(p+i);
		sum=sum+*(p+i);
	}
	cout<<sum;

}


