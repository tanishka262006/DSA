#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan()
		{
			cin>>x>>y;
		}
		void show()
		{
			cout<<x<<y;
		}
		void add(Number temp1,Number temp2)
		{
			x=temp1.x+temp2.x;
			y=temp1.y+temp2.y;
		}
};
int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	}




