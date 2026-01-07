/*4.Scan radius of a circle in main().Define functions to find area and circumference of circle.
Print both results in main().(use call by value)
*/
#include<iostream>
using namespace std;
float carea(float radius)
{
	float area=radius*radius;
	return area;
}
float ccircum(int radius)
{
	float circ=3.14*radius*radius;
	return circ;
}

int main()
{
	int radius;
	cin>>radius;
	float area=carea(radius);
	float circ=ccircum(radius);
	cout<<"area of circle is "<<area;
	cout<<"\ncircumference of circle is "<<circ;
	
	

}


