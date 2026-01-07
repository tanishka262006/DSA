#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void print()
		{
			cout<<x<<y;
		}
		
};
Number scan()
{
	Number temp;
	cin>>temp.x>>temp.y;
	return temp;
}
void print(Number temp)
{
	cout<<temp.x<<temp.y;
}
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		T2.print();
	}





