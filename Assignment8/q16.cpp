//Q16  Scan base and power in main(),find base raised to power in calc() function.
//Use of friend expected.
#include<iostream>
using namespace std;

class Base;
class Power
{
	private:
		int pow;
		void getpower();
		
		friend class Base;
};
void Power::getpower()
{
	cout<<"Enter power "<<endl;
	cin>>pow;
	
}
class Base
{
	private:
		int base;
	public:
		void getbase();
		void calc();
		
};
void Base::getbase()
{
	cout<<"Enter base "<<endl;
	cin>>base;
	
	
}
void Base::calc()
{
	int ans=1;
	Power pa;
	pa.getpower();
	int j;
		for(j=1;j<=pa.pow;j++)
		{
			ans=ans*base;
		}
	cout<<"ANswer is "<<ans<<endl;
}
int main()
{
	Base ba;
	Power po;
	ba.getbase();
	
	
	ba.calc();
}


