//2.Scan 8 integers from user.Find the smallest value.(using pointer)

#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int[8];
	for(int i=0;i<8;i++)
	{
		cin>>*(ptr+i);
	}
	int min=*(ptr+0);
	for(int i=0;i<8;i++)
	{
		if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
		
	}
	cout<<"lowest value is "<<min;
	

}


