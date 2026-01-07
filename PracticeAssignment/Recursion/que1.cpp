#include<iostream>
using namespace std;
void myfun(int x);
int main()
{
    int x;
    myfun(1);
}
void myfun(int x)
{
    if(x==3)
    {
        return;
    }
    cout<<x<<endl;
    myfun(x+1);
    cout<<"backtracking values"<<x<<endl;
}