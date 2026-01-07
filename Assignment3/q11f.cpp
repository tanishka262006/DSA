#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
};
class Digit
{
	public:
		void change(Number & obj)
		{
			obj.x=8;
			obj.y=78;
		}
};
int main()
{
	Number obj;
	Digit D;
	obj.x=5;
	obj.y=6;
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //5,6
	
	D.change(obj);
	
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //8,78
	
 	return 0;
}


