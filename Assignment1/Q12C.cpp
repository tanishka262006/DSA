#include<iostream>
using namespace std;

/*C.*/
int* fun(int *m)
{
    *m = 20;
    return m - 1; // return pointer to variable before b (assumed to be a)
}

int main()
{
    int a = 5, b = 8;
    cout << a << " " << b << endl; // Output: 5 8
    *fun(&b) = 10;
    cout << a << " " << b << endl; // Output: 10 20
    return 0;
}

