#include<iostream>
using namespace std;
void myfun(int* &q)
{
    *q=20;
}

int main()
{
    int a = 10;
    int* p;
    p = &a;
    myfun(p);
    cout << "\na = " << a;
}

