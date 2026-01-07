#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		void change(Number & obj)
		{
			
		}
		
};
class Digit
{
	public:
		void change(Number & obj)
		{
			void Number::change(obj);
		}
};
int main()
{
	Number obj;
	Digit D;
	cout<<"\n obj.x = "obj.x<<"  obj.y = "<<obj.y; //5,6
	
	D.change(obj);
	
	cout<<"\n obj.x = "obj.x<<"  obj.y = "<<obj.y; //8,78
	
 	return 0;
}

