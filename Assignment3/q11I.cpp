#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		static Number getobject()
		{
			Number num;
			cin>>num.x>>num.y;
			return num;
			
		}
		void show()
		{
			cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
		}
};

int main()
{
	Number T1,T2;
	T1 = Number::getobject();
	T2 = Number::getobject();
	T1.show();
	T2.show();
}



