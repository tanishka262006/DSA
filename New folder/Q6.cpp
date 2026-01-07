#include<iostream>
using namespace std;
int main()
{
	int num[13] = {23,5,32,15,7,48,75,4,32,16,9,21,34};
	int * p;
	p = num;
	cout<<"\n"<<sizeof(num);
	cout<<"\n"<<sizeof(p);
	cout<<"\n"<<*num + 2;
	cout<<"\n"<<*(num + 2);
	cout<<"\n"<<*(p+4);
	p = p + 2;
	cout<<"\n"<<"p = "<<p;
	cout<<"\n"<<*(p-1);
}


