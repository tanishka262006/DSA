#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		Number(int a,int b)
		{
			x=a;
			y=b;
		}
		~Number()
		{
			cout<<x<<" "<<y<<endl;
		}
};
//For above class Number,create 2 runtime objects.
//Scan their data from user in constructor.Print their data in destructor.
//Remember destructor for runtime object gets called when u delete that object 
//using delete operator.

int main()
{
	Number *num1,*num2;
	num1=new Number(10,30);
	num2=new Number(20,40);
	delete num1;
	delete num2;
	

}


