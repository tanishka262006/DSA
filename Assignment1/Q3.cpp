/*.Scan length and width of a rectangle.Define functions to find area and perimeter of rectangle.
Print both results in main().(use call by value)
*/
#include<iostream>
using namespace std;
int rarea(int l,int w)
{
	int area=l*w;
	return area;
}
int rperi(int l,int w)
{
	int peri=2*(l+w);
	return peri;
}
int main()
{
	int length,width;
	cin>>length>>width;
	int area=rarea(length,width);
	int perimeter=rperi(length,width);
	cout<<"area of rectangle is "<<area;
	cout<<"\nperemeter of rectangle is "<<perimeter;
	

}


