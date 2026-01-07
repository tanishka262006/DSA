#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void setData()
		{
			x=0;
			y=0;
		}
		void setData(int a,int b)
		{
			x=a;
			y=b;
		}
		void show()
		{
			cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
		}
};

int main()
{
	Number T1,T2;
	T1.setData();
	T2.setData(4,6);
	T1.show(); //will print 0,0
	T2.show(); //will print 4,6
}

