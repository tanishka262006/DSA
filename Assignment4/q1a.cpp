/*1.

*/
#include<iostream>
using namespace std;
void yourfun(int & x,int & y)
{
    x=3;
    y=4;
}

void myfun(int & m,int & n)
{
    yourfun(m,n);
}

int main()
{
    int a, b;
    a = 5;
    b = 8;
    cout << "\na = " << a << " b = " << b;
    myfun(a, b);
    cout << "\na = " << a << " b = " << b;
}
