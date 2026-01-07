/*10.Scan radius from user.Define only one function circle() to find area and circumference.Print both results in main().
(use pass by address)
*/
#include<iostream>
using namespace std;
void circle(int *radius,float* area,float* circumference)
{
	*(circumference)=3.14* *radius*(*radius);
	*area=*radius*(*radius);
}
int main()
{
	int radius;
	cin>>radius;
	float area,circumference;
	circle(&radius,&area,&circumference);
	cout<<"area is "<<area;
	cout<<"\ncircumference is "<<circumference;	
}


