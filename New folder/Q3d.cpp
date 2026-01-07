/*

For above class Number,create 2 runtime objects.
Scan their data in main() only.
Print squares of x and y of both objects in main().
Do not define any member function in class Number.

*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
};
int main()
{
	Number *num1,*num2;
	
	num1=new Number();
	num2=new Number();
	cin>>num1->x>>num1->y;
	cin>>num2->x>>num2->y;
	cout<<num1->x*num1->x<<" "<<num1->y*num1->y<<endl;
	cout<<num2->x*num2->x<<" "<<num2->y*num2->y;
	delete num1,num2;
}


