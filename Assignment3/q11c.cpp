//Do not change main() function and access specifier of any member. 
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};
void change(Number & change)
{
	change.x=8;
	change.y=78;
}
int main()
{
	Number obj;
	obj.x = 5;
	obj.y = 6;
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //5,6
	
	change(obj);
	
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //8,78
	
 	return 0;
}

