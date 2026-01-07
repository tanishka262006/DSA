#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void change()
		{
			x=8;
			y=78;
		}
		void show()
		{
			cout<<endl;
			cout<<"obj.x"<<"="<<x<<" "<<"obj.y"<<"="<<y;
		}
};

class Digit
{
	public:
		Number getNumber()
		{
			Number obj;
			obj.x=5;
			obj.y=6;
			return obj;
		}
};

int main()
{
	Number obj;
	Digit D;
	obj = D.getNumber();
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //5,6
	
	obj.change();
	
	obj.show(); //8,78
	
 	return 0;
}
