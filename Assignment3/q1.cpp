#include<iostream>
using namespace std;
class Number
{
	public:
		static int data;
		
};
int Number::data;
int main()
{
	Number::data=10;
	cout<<Number::data;
	
}
