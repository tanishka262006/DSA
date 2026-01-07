//1)
#include<iostream>
using namespace std;
int scandata()
{
	int num;
	cin>>num;
	return num;
	
}
int findarea(int len,int wid)
{
	return len*wid;
	
}
int findperimeter(int length ,int width)
{
	return 2*(length+width);
}
int main()
{
	int  length , width , area , perimeter ;
	cout<<"\nEnter length = \n";
	length = scandata();
	cout<<"\nEnter width = \n";
	width = scandata();
	
	area = findarea(length , width);
	perimeter = findperimeter(length , width);
	
	cout<<"\nArea = "<<area<<"   perimeter = "<<perimeter;
	
	return 0;
}

