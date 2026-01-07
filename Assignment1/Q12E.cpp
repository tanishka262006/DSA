#include<iostream>
using namespace std;
void disp(int *p)
{
	*p=10;
}
void show(int *m,int *n)
{
	disp(m);
	disp(n);
}
int main()
{
	int a=5,b=8;
	cout<<a<<" "<<b; //5,8
	show(&a,&b);
	cout<<a<<" "<<b;  //10,10
 	return 0;
}



