#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void print(Number temp)
		{
			cout<<x<<y;
			cout<<temp.x<<temp.y;
		}
		void scan(Number & temp)
		{
			cin>>x>>y;
			cin>>temp.x>>temp.y;
		}
};
	int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
	}




