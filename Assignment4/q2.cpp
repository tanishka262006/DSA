#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100] = "I am learning DataStructure";
    char* p = str;
    //Consider base address is 5680
    //No need to write hexadecimal address.
    //Write integer only when u think it prints address.
    cout << endl << "p+1 = " << p + 1;
    cout << endl << "*(p + 1) = " << *(p + 1);
    cout << endl << "(p + 4)" << p + 4;
    cout << endl << (long long)(p + 5);
    p = p + 3;
    cout << endl << "p = " << p;
    cout << endl << (long long)(p + 2);
    cout << endl << str + 4;
    cout << *(str + 4);
    p++;
    ++p;
    cout << endl << p + 0;
    cout << endl << strlen(p);
}

