#include<iostream>
using namespace std;
int scandata()
{
	int value;
	cin>>value;
	return value;
}
void findarea(int len,int wid,int *area)
{
	*area=(len*wid);
	cout<<"area is "<<*area;
}
void findperimeter(int len,int wid,int *perimeter)
{
	*perimeter=2*(len+wid);
	cout<<"perimeter is "<<*perimeter;
}
int main()
{
	int  length , width , area , perimeter ;
	cout<<"\nEnter length = \n";
	length = scandata();
	cout<<"\nEnter width = \n";
	width = scandata();
	
	findarea( length , width , &area );
	findperimeter( length , width , &perimeter );
	
	cout<<"\nArea = "<<area<<"   perimeter = "<<perimeter;
	
	return 0;
}

