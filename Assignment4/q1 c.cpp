#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* p = &a;
    int & y =*p;
    y = 20;
    cout << "\nx = " << a << "  y = " << y;
}


