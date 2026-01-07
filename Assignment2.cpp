#include<iostream>
using namespace std;


int yourfun(int* p)
{
	*p= 15;
	return *p;
}

int myfun(int *m)
{
	int a;
	a = yourfun(m);
	return a;
}

int main()
{
	int a,b;
	a = 5;
	b = 10;
	
	cout<<endl<<a<<"  "<<b; //5  10
	
	b = myfun(&a);
	
	cout<<endl<<a<<"  "<<b; // 15  20

	return 0;
}





